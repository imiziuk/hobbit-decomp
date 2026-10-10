
longlong __thiscall
FUN_00681b50(int param_1,short *param_2,int param_3,short *param_4,undefined4 param_5,int param_6)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  
  iVar6 = (int)param_4;
  lVar2 = 0;
  uVar8 = __aulldiv(0xffffffff,0xffffffff,param_5,0);
  uVar1 = *(ushort *)(param_1 + 0x12);
  uVar9 = __allmul((uint)uVar1,0,0,1);
  if (param_4 != (short *)0x0) {
    param_3 = param_3 - (int)param_2;
    param_4 = param_2;
    param_2 = (short *)iVar6;
    do {
      lVar12 = 0;
      psVar7 = param_4;
      for (uVar5 = (uint)uVar1; uVar5 != 0; uVar5 = uVar5 - 1) {
        uVar3 = (uint)*(short *)(param_3 + (int)psVar7);
        uVar4 = (uint)*psVar7;
        iVar6 = (((int)uVar3 >> 0x1f) - ((int)uVar4 >> 0x1f)) - (uint)(uVar3 < uVar4);
        lVar10 = __allmul(uVar3 - uVar4,iVar6,uVar3 - uVar4,iVar6);
        lVar12 = lVar10 + lVar12;
        psVar7 = psVar7 + 1;
      }
      uVar11 = __allmul(lVar12,uVar8);
      lVar12 = __aulldiv(uVar11,uVar9);
      lVar2 = lVar12 + lVar2;
      param_4 = (short *)((int)param_4 + param_6);
      param_2 = (short *)((int)param_2 + -1);
    } while (param_2 != (short *)0x0);
    return lVar2;
  }
  return 0;
}

