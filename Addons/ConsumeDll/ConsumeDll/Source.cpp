
#include <windows.h> 
#include <stdio.h> 
#include <iostream>
typedef double(*MYPROC)(double, double);

int main()
{
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
			std::cout << (ProcAdd)(2, 3);
		}
		// Free the DLL module.

		fFreeResult = FreeLibrary(hinstLib);
	}

	// If unable to call the DLL function, use an alternative.
	if (!fRunTimeLinkSuccess)
		printf("Message printed from executable\n");

	return 0;

}