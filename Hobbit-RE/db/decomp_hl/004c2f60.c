
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004c2f60(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  float *pfVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined1 auStack_34 [8];
  float fStack_2c;
  undefined4 auStack_28 [2];
  int iStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  FUN_004d22c0(param_2);
  (**(code **)(*param_1 + 0x8c))(param_2,0xffffffff);
  *(byte *)((int)param_1 + 0x7f) = *(byte *)((int)param_1 + 0x7f) & 0xfe ^ 1;
  *(ushort *)((int)param_1 + 0x15a) =
       ((ushort)(param_2 << 0xc) ^ *(ushort *)((int)param_1 + 0x15a)) & 0x1000 ^
       *(ushort *)((int)param_1 + 0x15a);
  pfVar7 = (float *)(param_1 + 0x11);
  FUN_0058c830(pfVar7,&stack0xffffffa0);
  if (param_3 != 0) {
    iStack_1c = param_1[3];
    *(byte *)((int)param_1 + 0x7b) = *(byte *)((int)param_1 + 0x7b) & 0xf7;
    iStack_20 = param_1[2];
    auStack_28[0] = 0x18;
    uStack_18 = 0;
    uVar9 = extraout_ECX;
    if (DAT_0075cf1c != 0) {
      FUN_0054e4d0(*(undefined4 *)(DAT_0075cf1c + 8),*(undefined4 *)(DAT_0075cf1c + 0xc),auStack_28)
      ;
      uVar9 = extraout_ECX_00;
    }
    if ((*(byte *)((int)param_1 + 0x15b) & 8) != 0) {
      FUN_00401f00((float)param_1[0x14] - *pfVar7,(float)param_1[0x15] - (float)param_1[0x12],
                   (float)param_1[0x16] - (float)param_1[0x13]);
      FUN_00401f00((float)param_1[0x14] + *pfVar7,(float)param_1[0x15] + (float)param_1[0x12],
                   (float)param_1[0x16] + (float)param_1[0x13]);
      FUN_00402160(auStack_34,&fStack_4c,0x3f000000);
      iVar1 = param_1[3];
      iVar2 = param_1[2];
      uVar15 = 0;
      uVar14 = 0;
      uVar13 = 0;
      uVar12 = 0x20;
      uVar11 = 0x3f800000;
      uVar10 = 0x41f00000;
      uVar9 = 0x41f00000;
      fVar8 = (float10)FUN_00404890(0x41f00000,0x41f00000,0x3f800000,0x20,0,0,0);
      FUN_0054d020(iVar2,iVar1,auStack_34,
                   (float)(fVar8 * (float10)_DAT_006e936c + (float10)_DAT_006e9354),uVar9,uVar10,
                   uVar11,uVar12,uVar13,uVar14,uVar15);
      uVar9 = extraout_ECX_01;
    }
    if (*(int *)param_1[0x51] != 0) {
      fVar3 = (float)param_1[5];
      fVar4 = (float)param_1[6];
      fVar5 = (float)param_1[7];
      piVar6 = (int *)FUN_0041bcc0();
      pfVar7 = (float *)(**(code **)(*piVar6 + 0x28))();
      fStack_2c = (float)param_1[7] - pfVar7[2];
      fStack_40 = ((float)param_1[5] - *pfVar7) * _DAT_006e936c;
      fStack_4c = fStack_40 + fVar3;
      fStack_48 = ((float)param_1[6] - pfVar7[1]) * _DAT_006e936c + fVar4;
      fStack_44 = fVar5 + fStack_2c * _DAT_006e936c;
      FUN_004357e0(&fStack_4c);
      FUN_004357e0(&stack0xffffffa0);
      FUN_004b3180();
      uVar9 = extraout_ECX_02;
    }
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 1;
    uVar10 = 1;
    FUN_00425250((int)param_1 + 0x82);
    uVar9 = FUN_004c7d60(0,uVar9,uVar10,uVar11,uVar12,uVar13);
    uVar9 = FUN_004c7d60(uVar9);
    FUN_004c7a10(param_1 + 5,param_1 + 0x1a,param_1 + 0x4c,uVar9);
  }
  return;
}

