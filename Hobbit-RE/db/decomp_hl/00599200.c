
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00599200(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float *pfVar5;
  int iVar6;
  float unaff_ESI;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_4;
  
  piVar4 = (int *)FUN_00592920();
  pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
  fStack_24 = *pfVar5;
  fStack_20 = pfVar5[1];
  fStack_1c = pfVar5[2];
  iVar6 = FUN_00592190();
  fStack_4 = *(float *)(iVar6 + 0x54) * DAT_006e92e4 +
             *(float *)(iVar6 + 100) * _DAT_006e9448 + *(float *)(iVar6 + 0x74) * DAT_006e92e4 +
             *(float *)(iVar6 + 0x84);
  fStack_24 = *(float *)(iVar6 + 0x4c) * DAT_006e92e4 +
              *(float *)(iVar6 + 0x5c) * _DAT_006e9448 + *(float *)(iVar6 + 0x6c) * DAT_006e92e4 +
              *(float *)(iVar6 + 0x7c) + fStack_24;
  fStack_20 = fStack_20 +
              *(float *)(iVar6 + 0x50) * DAT_006e92e4 +
              *(float *)(iVar6 + 0x60) * _DAT_006e9448 + *(float *)(iVar6 + 0x70) * DAT_006e92e4 +
              *(float *)(iVar6 + 0x80);
  fStack_1c = fStack_1c + fStack_4;
  piVar4 = (int *)FUN_00592920();
  iVar6 = (**(code **)(*piVar4 + 0x140))(&fStack_24,0,&fStack_18,param_1 + 0x2d8);
  if (iVar6 == 0) {
    fStack_18 = -(*(float *)(*(int *)(param_1 + 0x34) + 8) * *(float *)(param_1 + 0x294));
    iVar6 = FUN_00592190();
    fVar1 = *(float *)(iVar6 + 0x4c) * DAT_006e92e4 +
            *(float *)(iVar6 + 0x6c) * DAT_006e92e4 + fStack_18 * *(float *)(iVar6 + 0x5c) +
            *(float *)(iVar6 + 0x7c);
    fVar2 = *(float *)(iVar6 + 0x50) * DAT_006e92e4 +
            *(float *)(iVar6 + 0x70) * DAT_006e92e4 + fStack_18 * *(float *)(iVar6 + 0x60) +
            *(float *)(iVar6 + 0x80);
    fStack_14 = *(float *)(iVar6 + 0x54) * DAT_006e92e4 +
                *(float *)(iVar6 + 0x74) * DAT_006e92e4 + fStack_18 * *(float *)(iVar6 + 100) +
                *(float *)(iVar6 + 0x84);
  }
  else {
    piVar4 = (int *)FUN_00592920();
    pfVar5 = (float *)(**(code **)(*piVar4 + 0x28))();
    fVar1 = unaff_ESI - *pfVar5;
    fStack_14 = fStack_20 - pfVar5[2];
    fVar2 = (*(float *)(*(int *)(param_1 + 0x34) + 4) - DAT_006e92e8) + (fStack_24 - pfVar5[1]);
  }
  fVar3 = fStack_14;
  fStack_1c = 0.0;
  *(float *)(param_1 + 0x21c) = fVar1 + *(float *)(param_1 + 0x21c);
  fStack_18 = 1.0;
  *(float *)(param_1 + 0x220) = fVar2 + *(float *)(param_1 + 0x220);
  fStack_14 = 0.0;
  *(float *)(param_1 + 0x224) = fVar3 + *(float *)(param_1 + 0x224);
  FUN_004357e0(&fStack_1c);
  return;
}

