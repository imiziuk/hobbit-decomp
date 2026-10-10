
void FUN_0065c840(void)

{
  int iVar1;
  tagRECT local_20;
  tagRECT tStack_10;
  
  if (DAT_007eff68 != '\0') {
    iVar1 = FUN_0065b900();
    if (iVar1 != 0) {
      GetClientRect(DAT_007edadc,&local_20);
      MapWindowPoints(DAT_007edadc,(HWND)0x0,(LPPOINT)&local_20,2);
      ClipCursor(&local_20);
      GetClipCursor(&tStack_10);
      return;
    }
  }
  ClipCursor((RECT *)0x0);
  return;
}

