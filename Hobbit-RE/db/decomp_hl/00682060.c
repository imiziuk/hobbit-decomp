
undefined4 FUN_00682060(uint *param_1,short *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  short *psVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_3 != 0) {
    do {
      sVar3 = (short)*param_1;
      iVar1 = (int)sVar3;
      param_3 = param_3 + -1;
      uVar9 = *param_1 >> 0x10 & 0xff;
      puVar5 = param_1 + 1;
      if (0x58 < uVar9) {
        return 0;
      }
      *param_2 = sVar3;
      psVar7 = param_2 + 1;
      for (iVar4 = param_5 + -1; param_2 = psVar7, iVar4 != 0; iVar4 = iVar4 + -2) {
        uVar6 = *puVar5;
        puVar5 = (uint *)((int)puVar5 + 1);
        uVar8 = (byte)uVar6 & 0xf;
        uVar2 = FUN_00681d00(uVar8,iVar1,(int)(short)(&DAT_006f9d88)[uVar9]);
        uVar9 = (int)*(short *)(&DAT_006f9d68 + uVar8 * 2) + uVar9;
        if ((int)uVar9 < 0) {
          uVar9 = 0;
        }
        else if (0x58 < uVar9) {
          uVar9 = 0x58;
        }
        *psVar7 = (short)uVar2;
        param_2 = psVar7 + 1;
        if (iVar4 == 1) break;
        uVar6 = (uint)(byte)((byte)uVar6 >> 4);
        iVar1 = FUN_00681d00(uVar6,uVar2,(int)(short)(&DAT_006f9d88)[uVar9]);
        uVar9 = (int)*(short *)(&DAT_006f9d68 + uVar6 * 2) + uVar9;
        if ((int)uVar9 < 0) {
          uVar9 = 0;
        }
        else if (0x58 < uVar9) {
          uVar9 = 0x58;
        }
        *param_2 = (short)iVar1;
        psVar7 = psVar7 + 2;
      }
      param_1 = (uint *)((int)param_1 + param_4);
    } while (param_3 != 0);
  }
  return 1;
}

