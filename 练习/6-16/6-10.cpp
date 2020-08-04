//#define _CRT_SECURE_NO_WARNINGS 1
//# include <windows.h>
//LRESULT CALLBACK WndProc(HWND hWnd, UINT message,
//	WPARAM wParam, LPARAM lParam);
//void PrintRectangle();
//int WINAPI WinMain(HINSTANCE hCurrentInst,
//	HINSTANCE hPrevInstance, PSTR lpszCmdLine, int nCmdShow)
//{
//	WNDCLASS wndClass;
//	HWND hWnd;
//	MSG msg;
//	UINT width;
//	UINT height;
//	wndClass.style = CS_HREDRAW | CS_VREDRAW;
//	wndClass.lpfnWndProc = WndProc;
//	wndClass.cbClsExtra = 0;
//	wndClass.cbWndExtra = 0;
//	wndClass.hInstance = hCurrentInst;
//	wndClass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
//	wndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
//	wndClass.hbrBackground = (HBRUSH)GetStockObject(WHITE_BRUSH);
//	wndClass.lpszMenuName = NULL;
//	wndClass.lpszClassName = "BasicPrintApp";
//	RegisterClass(&wndClass);
//	width = GetSystemMetrics(SM_CXSCREEN) / 2;
//	height = GetSystemMetrics(SM_CYSCREEN) / 2;
//	hWnd = CreateWindow(
//		"BasicPrintApp",			/* ����������� */
//		"Basic Print App",			/* ���������ı� */
//		WS_OVERLAPPEDWINDOW,		/* ���ڵ���ʽ */
//		10,							/* Xλ�� */
//		10,							/* Yλ�� */
//		width,						/* ��� */
//		height,						/* �߶� */
//		NULL,						/* �����ڵľ�� */
//		NULL,						/* �˵���� */
//		hCurrentInst,				/* ʾ����� */
//		NULL);						/* ���������� */
//	ShowWindow(hWnd, nCmdShow);
//	UpdateWindow(hWnd);
//	while (GetMessage(&msg, NULL, 0, 0))
//	{
//		TranslateMessage(&msg);
//		DispatchMessage(&msg);
//	}
//	return msg.wParam;
//}
//LRESULT CALLBACK WndProc(HWND hWnd, UINT message,
//	WPARAM wParam, LPARAM lParam)
//{
//	HDC hDC;
//	PAINTSTRUCT paintStruct;
//	switch (message)
//	{
//	case WM_PAINT:               hDC = BeginPaint(hWnd, &paintStruct);
//		TextOut(hDC, 10, 10,
//			"Click in the window to print.", 29);
//		EndPaint(hWnd, &paintStruct);
//		return 0;
//	case WM_LBUTTONDOWN:
//		PrintRectangle();
//		return 0;
//	case WM_DESTROY:
//		PostQuitMessage(0);
//		return 0;
//	}
//	return DefWindowProc(hWnd, message, wParam, lParam);
//}
//void PrintRectangle()
//{
//	PRINTER_INFO_5 printerInfo5[3];
//	DWORD needed, returned;
//	HDC printDC;
//	DOCINFO docInfo;
//	char docName[] = "RectangleDoc";
//	int result;
//	// �� 1������ô�ӡ���� DC
//	EnumPrinters(PRINTER_ENUM_DEFAULT, NULL, 5,
//		(LPBYTE)printerInfo5, sizeof(printerInfo5),
//		&needed, &returned);
//	printDC = CreateDC(NULL,
//		printerInfo5[0].pPrinterName, NULL, NULL);
//	// �� 2�������� StartDoc()
//	docInfo.cbSize = sizeof(docInfo);
//	docInfo.lpszDocName = docName;
//	docInfo.lpszOutput = NULL;
//	docInfo.lpszDatatype = NULL;
//	docInfo.fwType = 0;
//	result = StartDoc(printDC, &docInfo);
//	if (result <= 0)
//	{
//		MessageBox(0, "StartDoc() failed",
//			"Basic Print App", MB_OK | MB_ICONERROR);
//		return;
//	}
//	// ��3��������StartPage()
//	result = StartPage(printDC);
//	if (result <= 0)
//	{
//		MessageBox(0, "StartPage() failed",
//			"Basic Print App", MB_OK | MB_ICONERROR);
//		return;
//	}
//	// ��4������ӡ����
//	Rectangle(printDC, 20, 20, 1000, 200);
//	TextOut(printDC, 100, 90,"Windows printing in action", 27);
//	// ��5��������EndPage()
//	result = EndPage(printDC);
//	if (result <= 0)
//	{
//		MessageBox(0, "EndPage() failed",
//			"Basic Print App", MB_OK | MB_ICONERROR);
//		return;
//	}
//	// ��6��������EndDOC()
//	EndDoc(printDC);
//	MessageBox(0, "Document printed", "Basic Print App",
//		MB_OK | MB_ICONINFORMATION);
//}
