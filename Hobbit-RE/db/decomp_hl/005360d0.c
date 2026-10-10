
/* WARNING: Removing unreachable block (ram,0x00536190) */
/* WARNING: Removing unreachable block (ram,0x0053620c) */
/* WARNING: Removing unreachable block (ram,0x00536234) */
/* WARNING: Removing unreachable block (ram,0x00536216) */
/* WARNING: Removing unreachable block (ram,0x00536221) */
/* WARNING: Removing unreachable block (ram,0x00536223) */
/* WARNING: Removing unreachable block (ram,0x00536229) */
/* WARNING: Removing unreachable block (ram,0x0053622d) */
/* WARNING: Removing unreachable block (ram,0x0053622f) */
/* WARNING: Removing unreachable block (ram,0x00536237) */
/* WARNING: Removing unreachable block (ram,0x00536274) */
/* WARNING: Removing unreachable block (ram,0x00536258) */
/* WARNING: Removing unreachable block (ram,0x00536276) */
/* WARNING: Removing unreachable block (ram,0x0053628a) */
/* WARNING: Removing unreachable block (ram,0x00536290) */
/* WARNING: Removing unreachable block (ram,0x005362b0) */
/* WARNING: Removing unreachable block (ram,0x005362b9) */
/* WARNING: Removing unreachable block (ram,0x005362dc) */
/* WARNING: Removing unreachable block (ram,0x005362ee) */
/* WARNING: Removing unreachable block (ram,0x00536335) */
/* WARNING: Removing unreachable block (ram,0x0053633d) */
/* WARNING: Removing unreachable block (ram,0x00536344) */

void FUN_005360d0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10b [63];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8daf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0054c5c0();
  puVar2 = local_10b;
  for (iVar1 = 0x3f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  if (DAT_00764558 == 0) {
    if (DAT_00764550 != 0) {
      FUN_006c026a();
      FUN_006bf840();
    }
    DAT_00764550 = 0;
    DAT_00764554 = 0;
  }
  DAT_0076454c = 0;
  FUN_00640450();
  FUN_0054c880();
  ExceptionList = local_c;
  return;
}

