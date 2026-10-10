
void __fastcall FUN_0043e180(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_4;
  
  FUN_00446eb0();
  local_4 = 0;
  if (DAT_00798548 == 0) {
    local_4 = 0x3e800000;
  }
  FUN_00549470(param_1 + 0x454);
  FUN_00549580(param_1 + 0x454);
  uVar3 = 1;
  uVar2 = 0;
  uVar1 = FUN_0053cc70(&DAT_00723f9c);
  FUN_00540840(uVar1,uVar2,uVar3,local_4);
  if (*(int *)(param_1 + 0x8dc) == 0xf) {
    *(undefined4 *)(param_1 + 0x580) = 1;
    *(undefined4 *)(param_1 + 0x590) = 1;
    *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
    *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
    *(undefined4 *)(param_1 + 0x484) = 0;
    *(undefined4 *)(param_1 + 0x488) = 0xc1f00000;
    *(undefined4 *)(param_1 + 0x48c) = 0;
  }
  FUN_004430e0(3);
  *(undefined4 *)(param_1 + 0x7bc) = 0;
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  *(undefined4 *)(param_1 + 0x7b4) = 0;
  *(undefined4 *)(param_1 + 0x9c8) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x9cc) = *(undefined4 *)(param_1 + 0x18);
  return;
}

