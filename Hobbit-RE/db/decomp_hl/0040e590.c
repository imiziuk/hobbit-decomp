
void __fastcall FUN_0040e590(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_14 [4];
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006ced58;
  local_c = ExceptionList;
  iVar3 = 0;
  ExceptionList = &local_c;
  local_10 = param_1;
  do {
    FUN_00649920(local_14,s_ForgeBright00_i_0071e6ac,iVar3);
    uVar4 = 0;
    local_4 = 0;
    uVar1 = FUN_00649940(0);
    iVar2 = FUN_0054c0f0(uVar1,uVar4);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar2 != 0) {
      FUN_0048a740();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  *(undefined4 *)(local_10 + 0x28) = 0;
  *(undefined4 *)(local_10 + 0x2c) = 0;
  ExceptionList = local_c;
  return;
}

