
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006603b0(void)

{
  tagPOINT local_10;
  tagPOINT tStack_8;
  
  local_10.x = DAT_007eff78;
  local_10.y = DAT_007eff7c;
  ClientToScreen(DAT_007edadc,&local_10);
  GetCursorPos(&tStack_8);
  _DAT_007effc0 = (float)tStack_8.x;
  _DAT_007effc4 = (float)tStack_8.y;
  _DAT_007effc8 = tStack_8.x - local_10.x;
  _DAT_007effcc = tStack_8.y - local_10.y;
  return;
}

