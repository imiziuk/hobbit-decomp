
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00520170(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  CRect aCStack_70 [12];
  undefined4 uStack_64;
  char *pcStack_60;
  undefined4 uStack_58;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  char *pcStack_38;
  undefined4 uStack_34;
  float *pfStack_30;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d7950;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  pfStack_30 = (float *)0x5201ac;
  uVar1 = FUN_00437340();
  *(undefined4 *)(param_1 + 0x174) = uVar1;
  *(undefined4 *)(param_1 + 0xb30) = 0;
  *(undefined4 *)(param_1 + 0xb34) = 0;
  *(undefined4 *)(param_1 + 0xb38) = 0;
  pfStack_30 = (float *)0x5201ce;
  FUN_004f8ac0();
  pfStack_30 = (float *)0x5201d8;
  iVar2 = FUN_00437340();
  if (iVar2 < 6) {
    pfStack_30 = (float *)0x5201f3;
    DAT_007626a4 = FUN_00437340();
  }
  else {
    DAT_007626a4 = 5;
  }
  pfStack_30 = (float *)0x0;
  uStack_34 = param_7;
  pcStack_38 = (char *)param_6;
  uStack_3c = param_5;
  uStack_40 = param_4;
  uStack_44 = param_3;
  uVar1 = FUN_006a2400();
  pfStack_30 = (float *)0x0;
  uStack_34 = 0x52022a;
  uVar3 = FUN_006a3320();
  pfStack_30 = (float *)0x2;
  *(undefined4 *)(param_1 + 500) = uVar3;
  uStack_34 = 0x520239;
  uVar3 = FUN_006a3320();
  pfStack_30 = (float *)s_frame2_00731f80;
  *(undefined4 *)(param_1 + 0x1f8) = uVar3;
  uStack_34 = 0x52024b;
  FUN_006a3e90();
  pfStack_30 = (float *)0x3;
  uStack_34 = 0x520254;
  uVar3 = FUN_006a3320();
  pfStack_30 = (float *)s_frame2_00731f80;
  *(undefined4 *)(param_1 + 0x1fc) = uVar3;
  uStack_34 = 0x520266;
  FUN_006a3e90();
  puVar6 = (undefined4 *)(param_1 + 0x178);
  for (iVar2 = 0x1e; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = 0xffffffff;
    puVar6 = puVar6 + 1;
  }
  iVar7 = 0;
  param_7 = 0;
  pfStack_30 = (float *)0x520286;
  iVar2 = FUN_00434e50();
  if (0 < iVar2) {
    param_6 = (int *)(param_1 + 0x178);
    do {
      uStack_34 = 0x52029f;
      pfStack_30 = (float *)iVar7;
      fVar8 = (float10)FUN_00434ca0();
      if ((NAN(fVar8) || NAN((float10)DAT_006e92e4)) == (fVar8 == (float10)DAT_006e92e4)) {
        uStack_34 = 0x5202b7;
        pfStack_30 = (float *)iVar7;
        iVar2 = FUN_00434e40();
        if (iVar2 != 0) {
          param_7 = param_7 + 1;
          *param_6 = iVar7;
          param_6 = param_6 + 1;
        }
      }
      iVar7 = iVar7 + 1;
      pfStack_30 = (float *)0x5202dc;
      iVar2 = FUN_00434e50();
    } while (iVar7 < iVar2);
  }
  pfStack_30 = (float *)(param_1 + 0x6b0);
  uStack_34 = 0;
  *(int *)(param_1 + 0x1f0) = param_7;
  pcStack_38 = s_Inst_CouragePoint_1_rgeom_007224a4;
  uStack_3c = 0x520302;
  uStack_34 = FUN_005496c0();
  pcStack_38 = (char *)0x52030e;
  pcStack_38 = (char *)__ftol();
  uStack_3c = 0x520314;
  iVar2 = FUN_006a22a0();
  fVar11 = (float)iVar2 + _DAT_007350bc;
  __ftol();
  iVar2 = FUN_006a2260();
  fVar10 = (float)iVar2 + _DAT_007350b8;
  __ftol();
  iVar2 = FUN_006a22a0();
  fVar9 = (float)iVar2;
  __ftol();
  uStack_58 = 0x52037e;
  iVar2 = FUN_006a2260();
  uStack_58 = 0x520390;
  CRect::CRect((CRect *)&uStack_44,(int)(float)iVar2,(int)fVar9,(int)fVar10,(int)fVar11);
  FUN_004f92f0();
  pfStack_30 = &local_1c;
  *(undefined4 *)(param_1 + 0x2ac) = 0x40000000;
  *(undefined4 *)(param_1 + 0xb3c) = 0;
  *(undefined4 *)(param_1 + 0xb40) = 0;
  uStack_34 = 0x5203c2;
  FUN_0052ce80();
  pfStack_30 = (float *)0x1;
  pcStack_60 = s_IDS_NULL_00731f24;
  uStack_64 = 0x5203d7;
  FUN_00649b20();
  pcStack_60 = (char *)0x5;
  local_4 = 0xffffffff;
  CRect::CRect(aCStack_70,0,0,0,0);
  iVar2 = __ftol();
  iVar7 = __ftol();
  iVar4 = __ftol();
  iVar5 = __ftol();
  CRect::CRect((CRect *)&stack0xffffff80,iVar5,iVar4,iVar7,iVar2);
  FUN_006a2cd0(param_3,param_2,param_1 + 0xb44);
  pfStack_30 = &local_1c;
  uStack_34 = 0x520483;
  FUN_0052cee0();
  pfStack_30 = (float *)0x1;
  pcStack_60 = s_IDS_NULL_00731f24;
  uStack_64 = 0x520498;
  FUN_00649b20();
  pcStack_60 = (char *)0x6;
  local_4 = 0xffffffff;
  CRect::CRect(aCStack_70,0,0,0,0);
  iVar2 = __ftol();
  iVar7 = __ftol();
  iVar4 = __ftol();
  iVar5 = __ftol();
  CRect::CRect((CRect *)&stack0xffffff80,iVar5,iVar4,iVar7,iVar2);
  FUN_006a2cd0(param_3,param_2,param_1 + 0xb48);
  fVar9 = (float)_DAT_007350c4;
  fVar11 = (float)_DAT_007350c0;
  pfStack_30 = (float *)DAT_007626a0;
  uStack_34 = 0x520558;
  iVar2 = FUN_006a22a0();
  uStack_34 = DAT_0076269c;
  pcStack_38 = (char *)0x520570;
  iVar7 = FUN_006a2260();
  local_1c = (float)iVar7;
  pfStack_30 = (float *)0x0;
  pcStack_60 = s_IDS_NULL_00731f24;
  uStack_64 = 0x5205ac;
  local_18 = (float)iVar2;
  local_14 = fVar11;
  local_10 = fVar9;
  FUN_00649b20();
  pcStack_60 = (char *)0x7;
  local_4 = 0xffffffff;
  CRect::CRect(aCStack_70,0,0,0,0);
  iVar2 = __ftol();
  iVar7 = __ftol();
  iVar4 = __ftol();
  iVar5 = __ftol();
  CRect::CRect((CRect *)&stack0xffffff80,iVar5,iVar4,iVar7,iVar2);
  FUN_006a2cd0(param_3,param_2,param_1 + 0xb4c);
  fVar9 = (float)_DAT_007350c4;
  pfStack_30 = (float *)DAT_00762694;
  fVar11 = (float)_DAT_007350c0;
  uStack_34 = 0x52066c;
  iVar2 = FUN_006a22a0();
  uStack_34 = DAT_00762698;
  pcStack_38 = (char *)0x520684;
  iVar7 = FUN_006a2260();
  local_1c = (float)iVar7;
  pfStack_30 = (float *)0x0;
  pcStack_60 = s_IDS_NULL_00731f24;
  uStack_64 = 0x5206c0;
  local_18 = (float)iVar2;
  local_14 = fVar11;
  local_10 = fVar9;
  FUN_00649b20();
  pcStack_60 = (char *)0x8;
  local_4 = 0xffffffff;
  CRect::CRect(aCStack_70,0,0,0,0);
  iVar2 = __ftol();
  iVar7 = __ftol();
  iVar4 = __ftol();
  iVar5 = __ftol();
  CRect::CRect((CRect *)&stack0xffffff80,iVar5,iVar4,iVar7,iVar2);
  FUN_006a2cd0(param_3,param_2,param_1 + 0xb50);
  *(undefined4 *)(param_1 + 0xb54) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb5c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb60) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb64) = 1;
  ExceptionList = local_c;
  return uVar1;
}

