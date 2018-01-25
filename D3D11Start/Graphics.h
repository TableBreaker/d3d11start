#pragma once
#include <d3d11.h>
#include <d3dcsx.h>
#include <DirectXMath.h>

#pragma comment (lib, "d3d11.lib")
#pragma comment (lib, "d3dcsx.lib")

// global declarations
IDXGISwapChain *swapchain;						// the pointer to the swap chain interface
ID3D11Device *dev;								// the pointer to our Direct3D device interface
ID3D11DeviceContext *devcon;					// the pointer to our Direct3D device context

												// function prototypes
void InitD3D(HWND hwnd);						// sets up and initializes Direct3D
void CleanD3D(void);							// closes Direct3D and releases memory

												// the WindowProc function prototype
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);