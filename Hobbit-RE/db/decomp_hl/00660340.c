
void FUN_00660340(int param_1)

{
  HCURSOR hCursor;
  
  if (param_1 == 0) {
    if (DAT_007effd0 == 0) {
      DAT_007effd0 = 1;
      SetCursor((HCURSOR)0x0);
      (**(code **)(*DAT_007f1000 + 0x30))(DAT_007f1000,1);
    }
  }
  else if (DAT_007effd0 != 0) {
    DAT_007effd0 = 0;
    hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    SetCursor(hCursor);
    (**(code **)(*DAT_007f1000 + 0x30))(DAT_007f1000,1);
    return;
  }
  return;
}

