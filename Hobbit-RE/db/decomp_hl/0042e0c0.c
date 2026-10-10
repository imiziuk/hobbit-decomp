
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042e0c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_4;
  
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  *(undefined4 *)(param_1 + 0x7a0) = 0;
  *(undefined4 *)(param_1 + 0x7b0) = 0x47c35000;
  bVar3 = (_DAT_0077285c & 0x40) != 0;
  if (bVar3) {
    _DAT_0077285c = _DAT_0077285c & 0xffffffbf;
  }
  DAT_0075bba4 = (uint)bVar3;
  FUN_00421f80();
  local_4 = 0;
  if (*(int *)(param_1 + 0x8dc) == 0xb) {
    local_4 = 0x3e800000;
  }
  *(undefined4 *)(param_1 + 0x794) = 0x3f800000;
  FUN_00549470(param_1 + 0x454);
  FUN_00549580(param_1 + 0x454);
  uVar5 = 1;
  uVar4 = 1;
  uVar2 = FUN_0053cc70(s_EDGE_IDLE_00720e6c);
  FUN_00540840(uVar2,uVar4,uVar5,local_4);
  iVar1 = *(int *)(param_1 + 0x450);
  *(undefined4 *)(param_1 + 0x580) = 1;
  *(undefined4 *)(param_1 + 0x590) = 1;
  *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
  *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(iVar1 + 0xfc);
  *(undefined4 *)(param_1 + 0x488) = *(undefined4 *)(iVar1 + 0x100);
  *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(iVar1 + 0x104);
  FUN_004430e0(7);
  FUN_0042c800(param_1 + 0x14,*(undefined4 *)(param_1 + 0x474));
  FUN_0042d800(param_1 + 0x3a0c);
  *(undefined4 *)(param_1 + 0xa10) = 0;
  return;
}

