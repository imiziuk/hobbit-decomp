
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_006bf250(int param_1,float ***param_2)

{
  int iVar1;
  undefined4 uVar2;
  int ***pppiVar3;
  int ***pppiVar4;
  int ***pppiVar5;
  int **ppiVar6;
  float10 fVar7;
  int ****ppppiStack_118;
  int ***pppiStack_104;
  float ***pppfStack_100;
  float ***pppfStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  float **ppfStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float **ppfStack_d8;
  float afStack_d4 [6];
  float **ppfStack_bc;
  float fStack_b8;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  float **ppfStack_8c;
  int *apiStack_88 [3];
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [64];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e85ab;
  pvStack_c = ExceptionList;
  ppppiStack_118 = (int ****)s_fx_plane__Render_00757d84;
  ExceptionList = &pvStack_c;
  FUN_00649600();
  local_4 = 0;
  ppppiStack_118 = (int ****)0x6bf296;
  iVar1 = (*(code *)(*param_2)[2])();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 4);
    ppppiStack_118 = (int ****)&pppfStack_fc;
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x18),&pppiStack_104);
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x1c),&fStack_f4,&fStack_f8);
    FUN_0064c8e0(*(undefined4 *)(param_1 + 0x20),&pppfStack_100,&fStack_f0);
    ppfStack_8c = (float **)
                  ((fStack_f0 * fStack_f8 + (float)pppfStack_100 * (float)pppiStack_104 * fStack_f4)
                  * *(float *)(param_1 + 0xc));
    apiStack_88[0] = (int *)((float)pppfStack_100 * (float)pppfStack_fc * *(float *)(param_1 + 0xc))
    ;
    apiStack_88[1] =
         (int *)(((float)pppfStack_100 * (float)pppiStack_104 * fStack_f8 - fStack_f0 * fStack_f4) *
                *(float *)(param_1 + 0xc));
    fStack_7c = (fStack_f4 * fStack_f0 * (float)pppiStack_104 - (float)pppfStack_100 * fStack_f8) *
                *(float *)(param_1 + 0x10);
    fStack_78 = fStack_f0 * (float)pppfStack_fc * *(float *)(param_1 + 0x10);
    fStack_74 = (fStack_f0 * (float)pppiStack_104 * fStack_f8 + (float)pppfStack_100 * fStack_f4) *
                *(float *)(param_1 + 0x10);
    fStack_6c = fStack_f4 * (float)pppfStack_fc * *(float *)(param_1 + 0x14);
    fStack_68 = -(float)pppiStack_104 * *(float *)(param_1 + 0x14);
    uStack_5c = *(undefined4 *)(param_1 + 0x24);
    uStack_58 = *(undefined4 *)(param_1 + 0x28);
    uStack_54 = *(undefined4 *)(param_1 + 0x2c);
    fStack_64 = fStack_f8 * (float)pppfStack_fc * *(float *)(param_1 + 0x14);
    ppppiStack_118 = (int ****)&ppfStack_8c;
    apiStack_88[2] = (int *)0x0;
    uStack_70 = 0;
    uStack_60 = 0;
    uStack_50 = 0x3f800000;
    uVar2 = FUN_006ba140();
    pppiVar3 = (int ***)FUN_0064e040(auStack_4c,uVar2);
    if ((&ppfStack_8c != (float ***)pppiVar3) &&
       (pppiStack_104 = pppiVar3 + 0x10, pppiVar3 != pppiStack_104)) {
      ppiVar6 = apiStack_88 + 1;
      pppiVar4 = pppiVar3;
      do {
        pppiVar5 = pppiVar4 + 4;
        ppiVar6[-2] = (int *)*pppiVar4;
        ppiVar6[-1] = (int *)pppiVar4[1];
        *ppiVar6 = *(int **)(((int)pppiVar3 - (int)&ppfStack_8c) + (int)ppiVar6);
        ppiVar6[1] = (int *)pppiVar4[3];
        ppiVar6 = ppiVar6 + 4;
        pppiVar4 = pppiVar5;
      } while (pppiVar5 != pppiStack_104);
    }
    afStack_d4[3] = -0.5;
    afStack_d4[4] = 0.5;
    afStack_d4[5] = 0.0;
    uStack_98 = 0x3f000000;
    uStack_94 = 0x3f000000;
    uStack_90 = 0;
    afStack_d4[0] = 0.5;
    afStack_d4[1] = -0.5;
    afStack_d4[2] = 0.0;
    uStack_a4 = 0xbf000000;
    uStack_a0 = 0xbf000000;
    uStack_9c = 0;
    ppppiStack_118 = *(int *****)(iVar1 + 0x84);
    pppfStack_100 = *(float ****)(iVar1 + 0x88);
    pppfStack_fc = (float ***)ppppiStack_118;
    fVar7 = (float10)(*(code *)**param_2)();
    fVar7 = (float10)FUN_0064c6b0((float)(fVar7 * (float10)*(float *)(iVar1 + 0x8c)));
    pppiStack_104 = (int ***)(float)fVar7;
    ppppiStack_118 = (int ****)pppfStack_100;
    fVar7 = (float10)(*(code *)**param_2)();
    fVar7 = (float10)FUN_0064c6b0((float)(fVar7 * (float10)*(float *)(iVar1 + 0x90)));
    fStack_e4 = (float)fVar7;
    fStack_e0 = (float)pppiStack_104 + (float)pppfStack_fc;
    ppfStack_e8 = (float **)pppiStack_104;
    ppppiStack_118 = (int ****)&ppfStack_d8;
    ppfStack_bc = (float **)pppiStack_104;
    uStack_ec = 0;
    ppfStack_d8 = (float **)0x0;
    fStack_a8 = (float)fVar7;
    fStack_dc = (float)(fVar7 + (float10)(float)pppfStack_100);
    fStack_b8 = (float)(fVar7 + (float10)(float)pppfStack_100);
    fStack_ac = fStack_e0;
    FUN_006ba340(*(undefined4 *)(iVar1 + 0x80),&uStack_ec);
    ppppiStack_118 = (int ****)0x20000026;
    if (0 < *(int *)(iVar1 + 0xc)) {
      ppppiStack_118 = (int ****)0x200000a6;
    }
    if (*(int *)(iVar1 + 0xc) < 0) {
      ppppiStack_118 =
           (int ****)
           CONCAT22((short)((uint)ppppiStack_118 >> 0x10),CONCAT11(1,(char)ppppiStack_118));
    }
    if (*(int *)(iVar1 + 8) == 0) {
      ppppiStack_118 = (int ****)((uint)ppppiStack_118 | 0x10);
    }
    FUN_0066c3a0(3);
    FUN_0066db80(uStack_ec,0);
    FUN_0066d9c0(&ppfStack_8c);
    ppppiStack_118 = *(int *****)(param_1 + 0x44);
    pppiStack_104 = (int ***)&ppppiStack_118;
    FUN_0066ddd0();
    FUN_0066dce0(&ppfStack_e8);
    FUN_0066de80(afStack_d4 + 3);
    FUN_0066dce0(&ppfStack_bc);
    FUN_0066de80(&uStack_a4);
    FUN_0066dce0(&fStack_e0);
    FUN_0066de80(afStack_d4);
    FUN_0066dce0(&fStack_e0);
    FUN_0066de80(afStack_d4);
    FUN_0066dce0(&fStack_ac);
    FUN_0066de80(&uStack_98);
    FUN_0066dce0(&ppfStack_e8);
    FUN_0066de80(afStack_d4 + 3);
    ppppiStack_118 = (int ****)0x6bf64e;
    FUN_0066d9a0();
    ppppiStack_118 = (int ****)param_2;
    FUN_006bb1e0();
  }
  local_4 = 0xffffffff;
  ppppiStack_118 = (int ****)0x6bf66a;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

