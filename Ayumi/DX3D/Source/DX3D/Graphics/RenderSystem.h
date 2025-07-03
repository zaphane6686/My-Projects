#pragma once
#include <DX3D/Graphics/GraphicsResources.h>
#include <DX3D/Core/Common.h>
#include <DX3D/Core/Base.h>
#include <d3d11.h>
#include <wrl.h>

namespace dx3d
{
	class RenderSystem final : public Base, public std::enable_shared_from_this<RenderSystem>
	{
	public:
		explicit RenderSystem(const RenderSystemDesc& desc);
		virtual ~RenderSystem() override;

		SwapChainPtr createSwapChain(const SwapChainDesc& desc) const;

	private:
		GraphicsResourceDesc getGraphicsResourceDesc() const noexcept;

	private:
		Microsoft::WRL::ComPtr<ID3D11Device> m_d3dDevice{};
		Microsoft::WRL::ComPtr<ID3D11DeviceContext> m_d3dContext{};
		Microsoft::WRL::ComPtr<IDXGIDevice> m_dxgiDevice{};
		Microsoft::WRL::ComPtr<IDXGIAdapter> m_dxgiAdapter{};
		Microsoft::WRL::ComPtr<IDXGIFactory> m_dxgiFactory{};
	};
}
