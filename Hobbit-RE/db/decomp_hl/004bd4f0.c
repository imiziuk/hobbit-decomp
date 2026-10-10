
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004bd4f0(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  int iVar5;
  float local_1c;
  float fStack_18;
  float afStack_10 [4];
  
  if ((((*(uint *)(param_1 + 0x260) & 4) == 0) && ((*(uint *)(param_1 + 0x260) & 0x40) != 0)) &&
     (*(int *)(param_1 + 0x250) == 0 && *(int *)(param_1 + 0x254) == 0)) {
    puVar4 = (undefined4 *)FUN_0064d8e0(&local_1c);
    *(undefined4 *)(param_1 + 0x220) = *puVar4;
    *(undefined4 *)(param_1 + 0x224) = puVar4[1];
    *(undefined4 *)(param_1 + 0x228) = puVar4[2];
    *(undefined4 *)(param_1 + 0x22c) = puVar4[3];
    *(undefined4 *)(param_1 + 0x230) = 0;
    *(undefined4 *)(param_1 + 0x234) = 0;
    *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x1c);
    FUN_004b9dd0();
    FUN_004bc630();
    *(uint *)(param_1 + 0x260) = *(uint *)(param_1 + 0x260) & 0xffffff7f;
    pfVar1 = (float *)(param_1 + 0x198);
    *(undefined4 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    *pfVar1 = 0.0;
    iVar5 = FUN_004bea50();
    if (iVar5 == 0) {
      local_1c = (*(float *)(param_1 + 400) - *(float *)(param_1 + 0x184)) * _DAT_006e936c;
      fStack_18 = (*(float *)(param_1 + 0x194) - *(float *)(param_1 + 0x188)) * _DAT_006e936c;
      iVar5 = FUN_004bf9f0(pfVar1,(float *)(param_1 + 0x18c),&stack0xffffffe0,0);
      if (iVar5 == 0) {
        return;
      }
      *(uint *)(param_1 + 0x260) = *(uint *)(param_1 + 0x260) | 0x80;
      FUN_0064e7d0(s_Start_flip__Will_Fall_at____2f___0072c5cc,(double)*pfVar1,
                   (double)*(float *)(param_1 + 0x19c),(double)*(float *)(param_1 + 0x1a0));
    }
    fVar2 = *(float *)(param_1 + 0x18c);
    fVar3 = *(float *)(param_1 + 0x14);
    local_1c = *(float *)(param_1 + 400) - *(float *)(param_1 + 0x18);
    fStack_18 = *(float *)(param_1 + 0x194) - *(float *)(param_1 + 0x1c);
    FUN_004bbcc0(afStack_10,&stack0xffffffe0);
    afStack_10[0] = afStack_10[0] - (fVar2 - fVar3);
    afStack_10[1] = 0.0;
    if (afStack_10[0] * afStack_10[0] +
        -local_1c * -local_1c + (afStack_10[2] - fStack_18) * (afStack_10[2] - fStack_18) <=
        DAT_006e92e8) {
      FUN_004bdfd0();
      *(uint *)(param_1 + 0x260) = *(uint *)(param_1 + 0x260) & 0xffffffe7 | 4;
    }
  }
  return;
}

