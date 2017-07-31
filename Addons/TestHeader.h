#pragma once
#include<string>
#include<iostream>
#include "HelloWorldDll.h"
typedef double(*MYPROC)(double, double);
namespace TestDll {
	class TestDllClass
	{
	public:
		TestDllClass();
		~TestDllClass();
		double TestDllFunc(double a, double b) {
				/*
				HINSTANCE hinstLib;
				MYPROC ProcAdd;
				BOOL fFreeResult, fRunTimeLinkSuccess = FALSE;

				// Get a handle to the DLL module.

				hinstLib = LoadLibrary(TEXT("D:\\Electron\\electron-quick-start\\Addons\\Dlls\\CreateDLL.dll"));
				// If the handle is valid, try to get the function address.

				if (hinstLib != NULL)
				{
					ProcAdd = (MYPROC)GetProcAddress(hinstLib, "?Add@Functions@MathLibrary@@SANNN@Z");

					// If the function address is valid, call the function.

					if (NULL != ProcAdd)
					{
						fRunTimeLinkSuccess = TRUE;
						return (ProcAdd)(2, 3);
					}
					// Free the DLL module.

					fFreeResult = FreeLibrary(hinstLib);
				}

				// If unable to call the DLL function, use an alternative.
				if (!fRunTimeLinkSuccess)
					printf("Unable to Call Dll\n");*/
					double res = MathLibrary::Functions::Add(a,b);
					return res;
		};

	private:

	};

	TestDllClass::TestDllClass()
	{
	}

	TestDllClass::~TestDllClass()
	{
	}
}