
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0041a0e0(int *param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  float10 fVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  double dVar9;
  ulonglong uVar10;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [20];
  
  iVar3 = (**(code **)(*param_1 + 0x154))();
  uStack_3c = *(undefined4 *)(iVar3 + 0x10);
  fStack_38 = *(float *)(iVar3 + 0x14);
  uStack_34 = *(undefined4 *)(iVar3 + 0x18);
  if (*(int *)(param_1[0x114] + 0xbc) != 0) {
    uVar4 = FUN_0043a420();
    FUN_0064f0d0(0x3c,0,s_State___s_0072001c,uVar4);
    uVar4 = FUN_0043a420();
    FUN_0064f0d0(0x3c,1,s_OldState0___s_0072000c,uVar4);
    uVar4 = FUN_0043a420();
    FUN_0064f0d0(0x3c,2,s_OldState1___s_0071fffc,uVar4);
    uVar4 = FUN_0043a420();
    FUN_0064f0d0(0x3c,3,s_OldState2___s_0071ffec,uVar4);
    uVar4 = FUN_0043a420();
    FUN_0064f0d0(0x3c,4,s_OldState3___s_0071ffdc,uVar4);
    FUN_0064f0d0();
    FUN_0064f0d0(0x3c,6,s_Pos___5_0f__5_0f__5_0f_0071ffa8,(double)(float)param_1[5],
                 (double)(float)param_1[6],(double)(float)param_1[7]);
    dVar9 = (double)((float)param_1[0x11d] * _DAT_006e9560 * _DAT_006e955c);
    uVar8 = 0x71ff9400000007;
    uVar4 = 0x3c;
    FUN_0064f0d0();
    FUN_0064f0d0(0x3c,8,s_Targeting___d_0071ff80,param_1[0x11b4],uVar4,uVar8,dVar9);
    puVar5 = &DAT_0071ff7c;
    if (param_1[0x133a] == 0) {
      puVar5 = &DAT_0071ff78;
    }
    FUN_0064f0d0(0x3c,9,s_Platforming___s_0071ff68,puVar5);
    puVar5 = &DAT_0071ff7c;
    if (param_1[0x1da] == 0) {
      puVar5 = &DAT_0071ff78;
    }
    FUN_0064f0d0(0x3c,10,s_Slipping___s_0071ff58,puVar5);
    puVar5 = &DAT_0071ff7c;
    if (param_1[0x1d8] == 0) {
      puVar5 = &DAT_0071ff78;
    }
    FUN_0064f0d0(0x3c,0xb,s_OnGround___s_0071ff48,puVar5);
    if (param_1[0xf0] != 0) {
      FUN_0064f0d0();
    }
    if (param_1[0xec] != 0) {
      FUN_0064f0d0();
    }
    if (param_1[0xf4] != 0) {
      FUN_0064f0d0();
    }
  }
  if ((*(int *)(param_1[0x114] + 0xf0) != 0) && (param_1[0x11b4] != 0)) {
    FUN_0066a800(param_1 + (param_1[0x11b5] + 0x612) * 3);
  }
  if (*(int *)(param_1[0x114] + 0xc0) != 0) {
    FUN_0066dac0();
    FUN_00669cf0(param_1 + 0x11);
  }
  if (*(int *)(param_1[0x114] + 0xc4) != 0) {
    FUN_0066a800();
  }
  if (*(int *)(param_1[0x114] + 200) != 0) {
    (**(code **)(*param_1 + 0x140))(param_1 + 5,0,&uStack_30,auStack_18);
    FUN_0066a800();
  }
  if (*(int *)(param_1[0x114] + 0xcc) != 0) {
    uStack_30 = uStack_3c;
    fStack_2c = fStack_38;
    uStack_28 = uStack_34;
    fStack_48 = 0.0;
    fStack_44 = 0.0;
    fStack_40 = 100.0;
    FUN_0064c8e0();
    fVar2 = fStack_40 * fStack_4c;
    uVar10 = (ulonglong)extraout_ECX;
    fStack_40 = fStack_40 * fStack_50 - fStack_48 * fStack_4c;
    fStack_48 = fStack_48 * fStack_50 + fVar2;
    FUN_00406b70();
    uVar4 = FUN_00402130();
    FUN_00669ca0(&uStack_30,uVar4,uVar10);
  }
  if (*(int *)(param_1[0x114] + 0xd0) != 0) {
    uStack_30 = uStack_3c;
    fStack_2c = fStack_38;
    uStack_28 = uStack_34;
    fStack_48 = 0.0;
    fStack_44 = 0.0;
    fStack_40 = 100.0;
    FUN_0064c8e0();
    fVar2 = fStack_40 * fStack_50;
    uVar10 = (ulonglong)extraout_ECX_00;
    fStack_40 = fStack_40 * fStack_4c - fStack_48 * fStack_50;
    fStack_48 = fStack_48 * fStack_4c + fVar2;
    FUN_00406b70();
    uVar4 = FUN_00402130();
    FUN_00669ca0(&uStack_30,uVar4,uVar10);
  }
  if (*(int *)(param_1[0x114] + 0xd4) != 0) {
    uVar8 = CONCAT44(0xffffff00,*(undefined4 *)(param_1[0x114] + 0x70));
    FUN_00401f00();
    uVar4 = FUN_00402130();
    FUN_00669ef0(param_1 + 5,uVar4,uVar8);
  }
  if (*(int *)(param_1[0x114] + 0xd8) != 0) {
    iVar3 = (**(code **)(*param_1 + 0x140))(param_1 + 5,0,&uStack_30,auStack_18);
    if (iVar3 != 0) {
      FUN_0066a800();
      uVar10 = (ulonglong)extraout_ECX_01;
      FUN_00406b70();
      uVar8 = CONCAT44(param_1[0x38],auStack_18);
      puVar7 = auStack_24;
      uVar4 = FUN_00402160();
      uVar4 = FUN_00402130(&fStack_48,&uStack_30,uVar4,puVar7,uVar8,uVar10);
      FUN_00669ca0(&uStack_30,uVar4);
    }
  }
  if ((*(int *)(param_1[0x114] + 0xe4) != 0) && (param_1[0x235] == 9)) {
    piVar1 = param_1 + 0x1f8;
    FUN_0066a800();
    uVar10 = (ulonglong)extraout_ECX_02;
    FUN_00406b70();
    puVar7 = auStack_24;
    uVar8 = CONCAT44(0x43160000,param_1 + 500);
    uVar4 = FUN_00402160();
    uVar4 = FUN_00402130(&uStack_30,piVar1,uVar4,puVar7,uVar8,uVar10);
    FUN_00669ca0(piVar1,uVar4);
    fVar6 = (float10)FUN_0064ca10(param_1[500],param_1[0x1f6]);
    fStack_2c = (float)fVar6;
    fStack_48 = 0.0;
    fStack_44 = 0.0;
    fStack_40 = 1.0;
    FUN_0064c8e0(0,&fStack_50,&fStack_4c);
    fVar2 = fStack_44 * fStack_50;
    fStack_44 = fStack_48 * fStack_50 + fStack_44 * fStack_4c;
    fStack_48 = fStack_4c * fStack_48 - fVar2;
    FUN_0064c8e0(0,&fStack_50,&fStack_4c);
    fVar2 = fStack_40 * fStack_50;
    fStack_40 = fStack_44 * fStack_50 + fStack_40 * fStack_4c;
    fStack_44 = fStack_44 * fStack_4c - fVar2;
    FUN_0064c8e0();
    fVar2 = fStack_40 * fStack_50;
    uVar10 = (ulonglong)extraout_ECX_03;
    fStack_40 = fStack_40 * fStack_4c - fStack_48 * fStack_50;
    fStack_48 = fStack_4c * fStack_48 + fVar2;
    FUN_00406b70();
    uVar8 = CONCAT44(0x43160000,&fStack_48);
    puVar7 = auStack_24;
    uVar4 = FUN_00402160();
    uVar4 = FUN_00402130(&uStack_30,piVar1,uVar4,puVar7,uVar8,uVar10);
    FUN_00669ca0(piVar1,uVar4);
  }
  if (*(int *)(param_1[0x114] + 0xdc) != 0) {
    DAT_0075bba0 = 1;
    FUN_0042c8b0();
    DAT_0075bba0 = 0;
  }
  if (*(int *)(param_1[0x114] + 0xf4) != 0) {
    FUN_004053c0();
  }
  return;
}

