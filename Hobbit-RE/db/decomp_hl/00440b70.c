
void __fastcall FUN_00440b70(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float10 fVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(param_1 + 0x6b0) = 0;
  FUN_004f8c00(0);
  if (*(int *)(param_1 + 0x46cc) == 0) {
    fVar3 = (float10)FUN_00434ca0(0x33);
    if ((NAN(fVar3) || NAN((float10)DAT_006e92e4)) != (fVar3 == (float10)DAT_006e92e4)) {
      return;
    }
    FUN_00435820(0,3,1);
    FUN_00435900(0);
    if (*(int *)(param_1 + 0x3b0) == 0) {
      *(uint *)(param_1 + 0x46cc) = (uint)(*(int *)(param_1 + 0x3d0) != 0) * 2 + -1;
    }
    else {
      *(undefined4 *)(param_1 + 0x46cc) = 2;
    }
    uVar1 = FUN_00435870();
    iVar2 = FUN_00435800(uVar1);
    if ((iVar2 != 3) || (*(int *)(param_1 + 0x418) != 0)) goto LAB_00440d1e;
    FUN_00423c90(0,0);
    pcVar4 = s_StingReady_007202c4;
  }
  else {
    if (*(int *)(param_1 + 0x46cc) != 1) {
      return;
    }
    fVar3 = (float10)FUN_00434ca0(0x74);
    if (((NAN(fVar3) || NAN((float10)DAT_006e92e4)) == (fVar3 == (float10)DAT_006e92e4)) &&
       (fVar3 = (float10)FUN_00434ca0(0x35),
       (NAN(fVar3) || NAN((float10)DAT_006e92e4)) != (fVar3 == (float10)DAT_006e92e4))) {
      FUN_00434cf0(0x35);
    }
    fVar3 = (float10)FUN_00434ca0(0x35);
    if ((NAN(fVar3) || NAN((float10)DAT_006e92e4)) != (fVar3 == (float10)DAT_006e92e4)) {
      return;
    }
    FUN_00435820(1,5,1);
    FUN_00435900(1);
    if (*(int *)(param_1 + 0x3b0) == 0) {
      *(uint *)(param_1 + 0x46cc) = (*(int *)(param_1 + 0x3c0) != 0) - 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x46cc) = 2;
    }
    uVar1 = FUN_00435870();
    iVar2 = FUN_00435800(uVar1);
    if (iVar2 != 5) goto LAB_00440d1e;
    FUN_00423c90(0,0);
    pcVar4 = s_StickReady_007202ac;
  }
  FUN_00659600(pcVar4,1);
LAB_00440d1e:
  if (*(int *)(param_1 + 0x5efc) != -1) {
    FUN_00549470(param_1 + 0x5ef8);
    FUN_00549580(param_1 + 0x5ef8);
    iVar2 = FUN_0053cc70(s_equip_weapon_007202d8);
    if (*(int *)(param_1 + 0x5efc) == iVar2) {
      return;
    }
  }
  (**(code **)(*(int *)(param_1 + 0x5ef4) + 8))();
  FUN_00549470(param_1 + 0x5ef8);
  FUN_00549580(param_1 + 0x5ef8);
  uVar5 = 0;
  uVar1 = FUN_0053cc70(s_equip_weapon_007202d8);
  FUN_005434b0(uVar1,uVar5);
  (**(code **)(*(int *)(param_1 + 0x5ef4) + 0x10))(0x3f800000);
  fVar3 = (float10)FUN_0064c6b0(0,(float)*(int *)(param_1 + 0x5f00) - DAT_006e92e8);
  *(float *)(param_1 + 0x5f04) = (float)fVar3;
  *(undefined4 *)(param_1 + 0x5f18) = 0x40000000;
  *(undefined4 *)(param_1 + 0x4e1c) = 0;
  return;
}

