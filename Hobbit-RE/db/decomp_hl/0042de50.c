
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0042de50(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_0042c8b0(param_1 + 0x14,*(undefined4 *)(param_1 + 0x474),1);
  fVar5 = (float10)FUN_00422fb0();
  fVar5 = ((float10)*(float *)(param_1 + 0x7ac) - fVar5) + (float10)_DAT_006e9368;
  if (((float10)_DAT_006e95a0 < fVar5) ||
     (fVar5 < (float10)_DAT_006e959c != (NAN(fVar5) || NAN((float10)_DAT_006e959c)))) {
    fVar5 = (float10)FUN_0064c6b0((float)fVar5,0x40c90fdb);
  }
  if ((float10)_DAT_006e9598 <= fVar5) {
    do {
      fVar5 = fVar5 - (float10)_DAT_006e9598;
    } while ((float10)_DAT_006e9598 <= fVar5);
  }
  if (fVar5 < (float10)DAT_006e92e4 != (NAN(fVar5) || NAN((float10)DAT_006e92e4))) {
    do {
      fVar5 = fVar5 + (float10)_DAT_006e9598;
    } while (fVar5 < (float10)DAT_006e92e4 != (NAN(fVar5) || NAN((float10)DAT_006e92e4)));
  }
  fVar5 = fVar5 - (float10)_DAT_006e9368;
  if (fVar5 < (float10)DAT_006e92e4 != (NAN(fVar5) || NAN((float10)DAT_006e92e4))) {
    fVar5 = -fVar5;
  }
  if (fVar5 < (float10)_DAT_006ebfc4 != (NAN(fVar5) || NAN((float10)_DAT_006ebfc4))) {
    iVar1 = *(int *)(param_1 + 0x560);
    if (*(int *)(iVar1 + 8) != -1) {
      FUN_00549470(iVar1 + 4);
      FUN_00549580(iVar1 + 4);
      iVar3 = FUN_0053cc70(s_edge_mount_above_00720e58);
      if (*(int *)(iVar1 + 8) == iVar3) goto LAB_0042dfde;
    }
    FUN_00422f30(*(undefined4 *)(param_1 + 0x7ac));
    FUN_00549470(param_1 + 0x454);
    FUN_00549580(param_1 + 0x454);
    uVar8 = 0;
    uVar7 = 1;
    uVar6 = 1;
    uVar4 = FUN_0053cc70(s_edge_mount_above_00720e58);
    FUN_00540840(uVar4,uVar6,uVar7,uVar8);
    *(undefined4 *)(param_1 + 0x794) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x580) = 1;
    *(undefined4 *)(param_1 + 0x590) = 1;
    *(int *)(param_1 + 0x58c) = *(int *)(param_1 + 0x58c) + 1;
    *(int *)(param_1 + 0x59c) = *(int *)(param_1 + 0x59c) + 1;
    *(undefined4 *)(param_1 + 0x484) = 0;
    *(undefined4 *)(param_1 + 0x488) = 0x41c80000;
    *(undefined4 *)(param_1 + 0x48c) = 0;
  }
LAB_0042dfde:
  iVar1 = *(int *)(param_1 + 0x560);
  if (*(int *)(iVar1 + 8) != -1) {
    FUN_00549470(iVar1 + 4);
    FUN_00549580(iVar1 + 4);
    iVar3 = FUN_0053cc70(s_edge_mount_above_00720e58);
    if ((*(int *)(iVar1 + 8) == iVar3) &&
       ((0 < *(int *)(param_1 + 0x534) ||
        (fVar2 = (float)(*(int *)(param_1 + 0x52c) + -2),
        fVar2 < *(float *)(param_1 + 0x530) != (fVar2 == *(float *)(param_1 + 0x530)))))) {
      FUN_0042c8b0(param_1 + 0x14,*(undefined4 *)(param_1 + 0x474),1);
      FUN_0043a3f0(0xc,s_C__projects_meridian_Support_Obj_00720e1c,0x2e5);
    }
  }
  return;
}

