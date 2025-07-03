#pragma once
#include <DX3D/Graphics/GraphicsResources.h>

namespace dx3d
{
	class SwapChain final : public GraphicsResource 
	{
	public:
		SwapChain(const SwapChainDesc& desc, const GraphicsResourceDesc& gDesc);

	private:
		Microsoft::WRL::ComPtr<IDXGISwapChain> m_swapChain{};
		Microsoft::WRL::ComPtr<ID3D11RenderTargetView> m_renderTargetView{};
		void createSwapChain(const SwapChainDesc& desc, const GraphicsResourceDesc& gDesc);
		void createRenderTargetView();
		void resizeBuffers(const SwapChainDesc& desc);
		
	};
}


