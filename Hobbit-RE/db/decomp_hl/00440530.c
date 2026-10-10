
void __fastcall FUN_00440530(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_004430e0(2);
  *(undefined4 *)(param_1 + 0x75c) = 0;
  *(undefined4 *)(param_1 + 0x758) = 0;
  *(undefined4 *)(param_1 + 0x754) = 0;
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  *(undefined4 *)(param_1 + 0xa0c) = 0;
  if (*(int *)(param_1 + 0x3c0) == 0) {
    if (*(int *)(param_1 + 0x3d0) == 0) {
      if (*(int *)(param_1 + 0x3b0) != 0) {
        *(undefined4 *)(param_1 + 0x46cc) = 2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x46cc) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x46cc) = 0;
  }
  FUN_00549470(param_1 + 0x454);
  FUN_00549580(param_1 + 0x454);
  uVar4 = 0x3e000000;
  uVar3 = 1;
  uVar2 = 0;
  uVar1 = FUN_0053cc70(s_IDLE_NO_WEAPON_007207fc);
  FUN_00540840(uVar1,uVar2,uVar3,uVar4);
  *(undefined4 *)(param_1 + 0x5eb4) = 0;
  *(undefined4 *)(param_1 + 0x5eb8) = 0;
  *(undefined4 *)(param_1 + 0x5ec0) = 0;
  return;
}

