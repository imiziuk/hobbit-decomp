
void __thiscall FUN_006bd6a0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uStack_1c;
  undefined4 auStack_18 [3];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e8528;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_fx_cylinder__Render_00757d18);
  local_4 = 0;
  iVar1 = (**(code **)(*param_2 + 8))();
  if (iVar1 != 0) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = pvStack_c;
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = FUN_006bae20(param_2);
  uStack_1c = 0;
  auStack_18[0] = 0;
  FUN_006ba340(*(undefined4 *)(iVar1 + 0x80),&uStack_1c,auStack_18);
  uVar4 = 4;
  uVar3 = 0x20000026;
  if (0 < *(int *)(iVar1 + 0xc)) {
    uVar3 = 0x200000a6;
  }
  if (*(int *)(iVar1 + 0xc) < 0) {
    uVar3 = CONCAT22((short)(uVar3 >> 0x10),CONCAT11(1,(char)uVar3));
  }
  if (*(int *)(iVar1 + 8) == 0) {
    uVar3 = uVar3 | 0x10;
  }
  if (*(int *)(param_1 + 0xb4) != 0) {
    uVar4 = 3;
  }
  FUN_0066c3a0(uVar4,uVar3);
  FUN_0066db80(uStack_1c,0);
  FUN_0066d9c0(uVar2);
  FUN_0066e100(*(undefined4 *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 0xb0),8);
  FUN_0066e150(*(undefined4 *)(param_1 + 200),*(undefined4 *)(param_1 + 0xb0),4);
  FUN_0066e180(*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xb0),0xc);
  FUN_0066e550(*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xac));
  FUN_0066d9a0();
  FUN_006bb1e0(param_2);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

