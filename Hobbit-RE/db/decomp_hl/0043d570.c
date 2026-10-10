
void __fastcall FUN_0043d570(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_00434cf0(0xa3);
  *(undefined4 *)(param_1 + 0x4d50) = *(undefined4 *)(param_1 + 0x4cf0);
  puVar3 = (undefined4 *)(param_1 + 0x4cf8);
  *(undefined4 *)(param_1 + 0x4d58) = *(undefined4 *)(param_1 + 0x4ce8);
  *(undefined4 *)(param_1 + 0x4d54) = *(undefined4 *)(param_1 + 0x4cf4);
  if (((undefined4 *)(param_1 + 0x4d5c) != puVar3) && (puVar3 != (undefined4 *)(param_1 + 0x4d38)))
  {
    puVar1 = (undefined4 *)(param_1 + 0x4d64);
    iVar4 = (int)puVar3 - (param_1 + 0x4d5c);
    do {
      puVar1[-2] = *puVar3;
      puVar1[-1] = puVar3[1];
      *puVar1 = *(undefined4 *)(iVar4 + (int)puVar1);
      puVar1[1] = puVar3[3];
      puVar3 = puVar3 + 4;
      puVar1 = puVar1 + 4;
    } while (puVar3 != (undefined4 *)(param_1 + 0x4d38));
  }
  FUN_00446eb0();
  if (((*(int *)(param_1 + 0x3c0) == 0) && (*(int *)(param_1 + 0x3d0) == 0)) &&
     (*(int *)(param_1 + 0x3b0) == 0)) {
    FUN_00549470(param_1 + 0x454);
    FUN_00549580(param_1 + 0x454);
    pcVar5 = s_JUMP_BEGIN_NO_WEAPON_007241b4;
  }
  else {
    FUN_00549470(param_1 + 0x454);
    FUN_00549580(param_1 + 0x454);
    pcVar5 = s_JUMP_BEGIN_WEAPON_007241cc;
  }
  uVar8 = 0;
  uVar7 = 1;
  uVar6 = 0;
  uVar2 = FUN_0053cc70(pcVar5);
  FUN_00540840(uVar2,uVar6,uVar7,uVar8);
  FUN_004430e0(0x12);
  *(undefined4 *)(param_1 + 0x7bc) = 0;
  *(undefined4 *)(param_1 + 0x7b8) = 0;
  *(undefined4 *)(param_1 + 0x7b4) = 0;
  *(undefined4 *)(param_1 + 0x9c8) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x9cc) = *(undefined4 *)(param_1 + 0x18);
  return;
}

