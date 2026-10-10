
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_0068564b(int param_1)

{
  uint uVar1;
  float fVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint extraout_EDX;
  uint unaff_EBX;
  uint unaff_EDI;
  float10 fVar7;
  
  puVar4 = (uint *)operator_new(unaff_EBX << 4);
  if (puVar4 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    FUN_006849fb();
    puVar3 = puVar4;
    for (uVar1 = extraout_EDX; uVar1 < unaff_EBX; uVar1 = uVar1 + 1) {
      fVar2 = (float)uVar1 * (float)((float10)unaff_EDI / (float10)unaff_EBX) - _DAT_006e936c;
      fVar7 = (float10)FUN_006c0ae5((double)fVar2);
      uVar5 = (uint)ROUND((float)fVar7);
      uVar6 = uVar5 + 1;
      if ((int)uVar5 < 0) {
        uVar5 = -(uint)(param_1 != 0) & unaff_EDI - 1;
      }
      if (unaff_EDI <= uVar6) {
        uVar6 = ~-(uint)(param_1 != 0) & unaff_EDI - 1;
      }
      *puVar3 = uVar5;
      puVar3[2] = uVar6;
      fVar2 = DAT_006e92e8 - (fVar2 - (float)fVar7);
      puVar3[1] = (uint)fVar2;
      puVar3[3] = (uint)(1.0 - fVar2);
      puVar3 = puVar3 + 4;
    }
    FUN_00684a1e();
  }
  return puVar4;
}

