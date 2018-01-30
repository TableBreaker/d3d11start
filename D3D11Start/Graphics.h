#pragma once
#include <d3d11.h>
#include <d3dcsx.h>
#include <DirectXMath.h>
#include <D3Dcompiler.h>
#include "Structs.h"

#pragma comment (lib, "d3d11.lib")
#pragma comment (lib, "d3dcsx.lib")
#pragma comment (lib, "D3DCompiler.lib")

#define SCREEN_WIDTH 800
#define SCREEN_HEIGHT 600


void InitD3D(HWND hwnd);						// sets up and initializes Direct3D
void InitPipeline(void);						
void InitGraphics(void);
void RenderFrame(void);							// renders a single frame
void CleanD3D(void);							// closes Direct3D and releases memory