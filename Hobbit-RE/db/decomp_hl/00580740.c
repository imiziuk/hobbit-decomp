
/* WARNING: Removing unreachable block (ram,0x00580a0e) */
/* WARNING: Removing unreachable block (ram,0x00580a10) */

void __fastcall FUN_00580740(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc058;
  local_c = ExceptionList;
  local_14 = 0x7fffffff;
  ExceptionList = &local_c;
  FUN_005492b0(&local_14,0);
  puVar1 = (uint *)(param_1 + 0x14);
  uVar4 = *(uint *)(param_1 + 0x14) & 0x7fffffff;
  local_4 = 0;
  *puVar1 = (uVar4 ^ (local_14 * 2 ^ local_14) & 0x7fffffff ^ local_14 * 2) & 0x7fffffff ^ uVar4;
  FUN_005492b0(puVar1,0);
  if ((int)local_14 < 0) {
    FUN_00549470(puVar1);
  }
  uVar2 = FUN_00549620(&local_14);
  FUN_00549670(puVar1,uVar2);
  local_4 = 0xffffffff;
  FUN_00549580(&local_14);
  FUN_00549350(&local_14);
  local_14 = 0x7fffffff;
  FUN_005822d0();
  *(undefined4 *)(param_1 + 0x78) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x7c) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x80) = 0x7f7fffff;
  FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xcc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined2 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0x468ca000;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  FUN_006bf840(*(undefined4 *)(param_1 + 0xe4));
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 4) = 2;
  FUN_00429100();
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined2 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x130) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x134) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x138) = 0x40a00000;
  local_10 = DAT_006e92e8 /
             SQRT(*(float *)(param_1 + 0x138) * *(float *)(param_1 + 0x138) +
                  *(float *)(param_1 + 0x134) * *(float *)(param_1 + 0x134) +
                  *(float *)(param_1 + 0x130) * *(float *)(param_1 + 0x130));
  iVar3 = FUN_0064cf30(local_10);
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x134) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  else {
    *(float *)(param_1 + 0x130) = local_10 * *(float *)(param_1 + 0x130);
    *(float *)(param_1 + 0x134) = local_10 * *(float *)(param_1 + 0x134);
    *(float *)(param_1 + 0x138) = local_10 * *(float *)(param_1 + 0x138);
  }
  piVar5 = *(int **)(param_1 + 0x140);
  if (piVar5 != *(int **)(param_1 + 0x144)) {
    do {
      if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar5)(1);
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != *(int **)(param_1 + 0x144));
  }
  uVar2 = *(undefined4 *)(param_1 + 0x140);
  FUN_005b8840(uVar2,*(undefined4 *)(param_1 + 0x144));
  *(undefined4 *)(param_1 + 0x144) = uVar2;
  ExceptionList = local_c;
  return;
}

