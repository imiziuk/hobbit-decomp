
void __fastcall FUN_00421f80(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uStack_30;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uStack_30._4_4_ = *(float **)(param_1 + 0x4dcc);
  uStack_30._0_4_ = *(undefined4 *)(param_1 + 0x4dc8);
  piVar1 = (int *)FUN_004021c0();
  local_18 = (float)piVar1[0x11];
  local_14 = (float)piVar1[0x12];
  local_10 = (float)piVar1[0x13];
  uStack_30._4_4_ = (float *)(piVar1 + 0x14);
  uStack_30._0_4_ = 0x421fc5;
  FUN_004357e0();
  uStack_30._4_4_ = (float *)0x0;
  uStack_30._0_4_ = 0x421fcf;
  FUN_004948c0();
  uStack_30._4_4_ = *(float **)(param_1 + 0x4dd4);
  uStack_30._0_4_ = *(undefined4 *)(param_1 + 0x4dd0);
  iVar2 = FUN_004021c0();
  if (*(float *)(iVar2 + 0x44) < local_18 != (NAN(*(float *)(iVar2 + 0x44)) || NAN(local_18))) {
    local_18 = *(float *)(iVar2 + 0x44);
  }
  if (*(float *)(iVar2 + 0x48) < local_14 != (NAN(*(float *)(iVar2 + 0x48)) || NAN(local_14))) {
    local_14 = *(float *)(iVar2 + 0x48);
  }
  if (*(float *)(iVar2 + 0x4c) < local_10 != (NAN(*(float *)(iVar2 + 0x4c)) || NAN(local_10))) {
    local_10 = *(float *)(iVar2 + 0x4c);
  }
  if (local_c < *(float *)(iVar2 + 0x50)) {
    local_c = *(float *)(iVar2 + 0x50);
  }
  if (local_8 < *(float *)(iVar2 + 0x54)) {
    local_8 = *(float *)(iVar2 + 0x54);
  }
  if (local_4 < *(float *)(iVar2 + 0x58)) {
    local_4 = *(float *)(iVar2 + 0x58);
  }
  uStack_30._4_4_ = (float *)0x0;
  uStack_30._0_4_ = 0x42206d;
  FUN_004948c0();
  if (*(int *)(param_1 + 0x3c0) != 0) {
    uStack_30._4_4_ = *(float **)(param_1 + 0x4ddc);
    uStack_30._0_4_ = *(undefined4 *)(param_1 + 0x4dd8);
    iVar2 = FUN_004021c0();
    if ((iVar2 == 0) || (*(char *)(iVar2 + 0x7c) != ',')) {
      uStack_30._4_4_ = (float *)0x0;
      uStack_30._0_4_ = 0;
      uStack_30 = FUN_0054bad0(0x2c);
      *(undefined8 *)(param_1 + 0x4dd8) = uStack_30;
      FUN_004021c0();
      uStack_30._4_4_ = (float *)0xff000000;
      FUN_004945e0(&uStack_30);
      uVar3 = *(undefined4 *)(param_1 + 0x4de0);
      fVar4 = (float10)FUN_00494640(uVar3);
      fVar6 = (float)fVar4;
      fVar4 = (float10)FUN_00494610(fVar6);
      fVar5 = (float)fVar4;
      uVar7 = (**(code **)(*piVar1 + 0x28))(fVar5);
      FUN_004ad470(s_StingFadeLight_00720620,uVar7,fVar5,fVar6,uVar3);
      uStack_30._4_4_ = (float *)0x100;
      uStack_30._0_4_ = 0x42216a;
      FUN_004948b0();
    }
    else {
      uStack_30._4_4_ = (float *)0xff000000;
      FUN_004945e0(&uStack_30);
      uVar7 = 0x3f800000;
      fVar4 = (float10)FUN_00494640(0x3f800000);
      fVar6 = (float)fVar4;
      fVar4 = (float10)FUN_00494610(fVar6);
      fVar5 = (float)fVar4;
      uVar3 = (**(code **)(*piVar1 + 0x28))(fVar5);
      FUN_004ad470(s_StingFadeLight_00720620,uVar3,fVar5,fVar6,uVar7);
    }
  }
  uStack_30._4_4_ = &local_18;
  uStack_30._0_4_ = 0x422179;
  FUN_005832c0();
  return;
}

