
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004d29d0(int *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [4];
  float fStack_14;
  undefined1 auStack_c [12];
  
  if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
    if (DAT_0075db54 != 0) {
      FUN_00401f00((float)param_1[0x11] + (float)param_1[0x14],
                   (float)param_1[0x15] + (float)param_1[0x12],
                   (float)param_1[0x16] + (float)param_1[0x13]);
      FUN_00402160(auStack_18,auStack_c,0x3f000000);
      fStack_14 = (float)param_1[0x15] + _DAT_006e998c;
      puVar1 = &DAT_0071fac4;
      if ((*(byte *)(param_1 + 0x58) & 2) == 0) {
        puVar1 = &DAT_0071fac0;
      }
      uVar2 = (**(code **)(*param_1 + 0x4c))(puVar1);
      pcVar6 = s__s___s__0072d86c;
      uVar5 = extraout_ECX;
      FUN_00406b70(0xffffffff);
      FUN_0066ae20(auStack_18,uVar5,pcVar6,uVar2);
      fStack_70 = (float)param_1[0x11] - _DAT_006e9554;
      fStack_6c = (float)param_1[0x12] - _DAT_006e9554;
      fStack_68 = (float)param_1[0x13] - _DAT_006e9554;
      fStack_64 = (float)param_1[0x14] + _DAT_006e9554;
      fStack_60 = (float)param_1[0x15] + _DAT_006e9554;
      fStack_5c = (float)param_1[0x16] + _DAT_006e9554;
      FUN_00669cf0(&fStack_70,0xffffff00);
      uVar7 = 0;
      uVar5 = extraout_ECX_00;
      FUN_00406b70(0xffffff00);
      uVar2 = FUN_0045bbd0(auStack_c);
      FUN_00669ca0(param_1 + 5,uVar2,uVar5,uVar7);
    }
    iVar3 = (**(code **)(*param_1 + 0xdc))();
    if (iVar3 != 0) {
      FUN_0064c8e0(param_1[0x1a],&fStack_74,&fStack_80);
      FUN_0064c8e0(param_1[0x1b],&fStack_88,&fStack_84);
      FUN_0064c8e0(param_1[0x1c],&fStack_7c,&fStack_78);
      fStack_58 = (fStack_78 * fStack_84 + fStack_7c * fStack_74 * fStack_88) * (float)param_1[0x4c]
      ;
      fStack_54 = fStack_7c * fStack_80 * (float)param_1[0x4c];
      fStack_50 = (fStack_7c * fStack_74 * fStack_84 - fStack_78 * fStack_88) * (float)param_1[0x4c]
      ;
      fStack_48 = (fStack_88 * fStack_78 * fStack_74 - fStack_7c * fStack_84) * (float)param_1[0x4d]
      ;
      fStack_44 = fStack_78 * fStack_80 * (float)param_1[0x4d];
      fStack_40 = (fStack_7c * fStack_88 + fStack_78 * fStack_74 * fStack_84) * (float)param_1[0x4d]
      ;
      fStack_38 = fStack_88 * fStack_80 * (float)param_1[0x4e];
      fStack_34 = -fStack_74 * (float)param_1[0x4e];
      fStack_30 = fStack_84 * fStack_80 * (float)param_1[0x4e];
      iStack_24 = param_1[6];
      iStack_28 = param_1[5];
      iStack_20 = param_1[7];
      uStack_4c = 0;
      uStack_3c = 0;
      uStack_2c = 0;
      uStack_1c = 0x3f800000;
      piVar4 = (int *)(**(code **)(*param_1 + 0x128))(&fStack_58,1);
      (**(code **)(*piVar4 + 4))(param_1);
    }
  }
  return;
}

