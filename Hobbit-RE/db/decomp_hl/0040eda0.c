
void __fastcall FUN_0040eda0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_14 [4];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ced78;
  local_c = ExceptionList;
  iVar3 = 1;
  ExceptionList = &local_c;
  local_10 = param_1;
  do {
    FUN_00649920(local_14,s_AA_Erebor_Door_00_d_0071e800,iVar3);
    uVar4 = 0;
    local_4 = 0;
    uVar1 = FUN_00649940(0);
    iVar2 = FUN_0054c120(uVar1,uVar4);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 != 0) {
      FUN_004c7660(0);
      FUN_004c74d0(0x3f800000);
      FUN_004c77d0(0);
      *(ushort *)(iVar2 + 0x15a) = *(ushort *)(iVar2 + 0x15a) & 0xbfff ^ 0x4000;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  FUN_00659600(s_StoneDoorOpen_0071e7f0,1);
  FUN_0040ea50();
  FUN_0064e7d0(s_TILEPUZZLE___Erebor__activated__0071e7cc);
  ExceptionList = local_c;
  return;
}

