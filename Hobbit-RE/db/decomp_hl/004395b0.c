
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004395b0(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 local_28 [32];
  float local_8;
  
  fVar7 = *(float *)(param_1 + 0x530) / (float)(*(int *)(param_1 + 0x52c) + -2);
  if (fVar7 < _DAT_006ec06c != (NAN(fVar7) || NAN(_DAT_006ec06c))) {
    iVar8 = FUN_00549470(param_1 + 0x524);
    FUN_00549580(param_1 + 0x524);
    iVar9 = *(int *)(param_1 + 0x528) * 0x50;
    iVar10 = (int)*(short *)(iVar9 + 0x24 + *(int *)(iVar8 + 0x58));
    FUN_0053f7a0(*(undefined4 *)(iVar9 + *(int *)(iVar8 + 0x58) + 0x20),(iVar10 + -1) % iVar10,0,
                 local_28);
    iVar8 = *(int *)(param_1 + 0x450);
    fVar1 = *(float *)(iVar8 + 0xfc);
    fVar2 = *(float *)(iVar8 + 0x100);
    fVar3 = *(float *)(iVar8 + 0x104);
    fVar4 = *(float *)(iVar8 + 0xfc);
    fVar5 = *(float *)(iVar8 + 0x100);
    fVar6 = *(float *)(iVar8 + 0x104);
    *(undefined4 *)(param_1 + 0x580) = 1;
    *(undefined4 *)(param_1 + 0x590) = 1;
    *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
    *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
    *(float *)(param_1 + 0x484) = -fVar1 * fVar7 + fVar4;
    *(float *)(param_1 + 0x48c) = -fVar3 * fVar7 + fVar6;
    *(float *)(param_1 + 0x488) = (local_8 - fVar2) * fVar7 + fVar5;
    return;
  }
  if (*(int *)(param_1 + 0x760) != 0) {
    if (*(float *)(*(int *)(param_1 + 0x450) + 0xc) < *(float *)(param_1 + 0x610)) {
      FUN_0043a3f0(3,s_C__projects_meridian_Support_Obj_00723d0c,0x298);
      return;
    }
    FUN_0043a3f0(7,s_C__projects_meridian_Support_Obj_00723d0c,0x29d);
    return;
  }
  if ((0 < *(int *)(param_1 + 0x534)) ||
     (fVar7 = (float)(*(int *)(param_1 + 0x52c) + -2),
     fVar7 < *(float *)(param_1 + 0x530) != (fVar7 == *(float *)(param_1 + 0x530)))) {
    FUN_0043a3f0(6,s_C__projects_meridian_Support_Obj_00723d0c,0x2a2);
  }
  return;
}

