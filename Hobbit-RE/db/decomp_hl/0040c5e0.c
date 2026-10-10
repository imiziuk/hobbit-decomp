
void FUN_0040c5e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006cec78;
  local_c = ExceptionList;
  iVar4 = 0;
  ExceptionList = &local_c;
  do {
    FUN_00649920(&param_1,s_Gondola_Car__03d_0071e4a8,iVar4);
    uVar5 = 0;
    local_4 = 0;
    uVar2 = FUN_00649940(0);
    iVar3 = FUN_0054c0f0(uVar2,uVar5);
    local_4 = 0xffffffff;
    FUN_00649950();
    if (iVar3 != 0) {
      *(ushort *)(iVar3 + 0x15a) =
           ((ushort)(iVar1 << 0xe) ^ *(ushort *)(iVar3 + 0x15a)) & 0x4000 ^
           *(ushort *)(iVar3 + 0x15a);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x15);
  ExceptionList = local_c;
  return;
}

