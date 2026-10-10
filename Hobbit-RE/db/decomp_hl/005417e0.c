
void __thiscall FUN_005417e0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  undefined1 local_c [12];
  
  FUN_00549470(param_1 + 0xd0);
  FUN_00549580(param_1 + 0xd0);
  iVar15 = FUN_0053f210(2);
  if (*(int *)(param_1 + 300) != 0) {
    FUN_00542230();
  }
  pfVar17 = (float *)(iVar15 * 0x40 + *(int *)(param_1 + 0x130));
  pfVar16 = (float *)FUN_0053f260(local_c,0);
  fVar1 = pfVar17[1];
  fVar2 = *pfVar16;
  fVar3 = pfVar17[9];
  fVar4 = pfVar16[2];
  fVar5 = pfVar17[5];
  fVar6 = pfVar16[1];
  fVar7 = pfVar17[0xd];
  fVar8 = pfVar17[2];
  fVar9 = *pfVar16;
  fVar10 = pfVar17[10];
  fVar11 = pfVar16[2];
  fVar12 = pfVar17[6];
  fVar13 = pfVar16[1];
  fVar14 = pfVar17[0xe];
  *param_2 = *pfVar17 * *pfVar16 + pfVar17[4] * pfVar16[1] + pfVar17[8] * pfVar16[2] + pfVar17[0xc];
  param_2[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2 + fVar7;
  param_2[2] = fVar12 * fVar13 + fVar10 * fVar11 + fVar8 * fVar9 + fVar14;
  return;
}

