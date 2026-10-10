
void __fastcall FUN_004a4280(int *param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  float10 fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fStack_38;
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3b98;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_NPCObject__EmitPain_0072b034);
  local_4 = 0;
  iVar3 = (**(code **)(*param_1 + 0x154))();
  if ((iVar3 == 0) ||
     (puVar4 = (uint *)(**(code **)(*param_1 + 0x154))(), uVar2 = *puVar4 * 2,
     ((uVar2 ^ *puVar4) & 0x7fffffff ^ uVar2) == 0xffffffff)) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = pvStack_c;
    return;
  }
  iVar3 = (**(code **)(*param_1 + 0x154))();
  fVar1 = *(float *)(iVar3 + 0xdc);
  iVar3 = (**(code **)(*param_1 + 0x154))();
  iVar5 = FUN_00549470(iVar3 + 0xd0);
  FUN_00549580(iVar3 + 0xd0);
  iVar3 = (int)*(short *)(*(int *)(iVar3 + 0xd4) * 0x50 + 0x26 + *(int *)(iVar5 + 0x58));
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar6 = FUN_0053f210(3);
      if (((iVar6 != 1) ||
          (iVar6 = FUN_0053f210(0), (float)iVar6 < fVar1 == ((float)iVar6 == fVar1))) ||
         (iVar6 = FUN_0053f210(1), (float)iVar6 < fVar1)) {
        iVar6 = FUN_0053f210(3);
        if (((iVar6 != 0x12) ||
            (iVar6 = FUN_0053f210(0), (float)iVar6 < fVar1 == ((float)iVar6 == fVar1))) ||
           (iVar6 = FUN_0053f210(1), (float)iVar6 < fVar1)) goto LAB_004a45b7;
        puVar9 = auStack_18;
        iVar6 = iVar5;
        (**(code **)(*param_1 + 0x154))(puVar9,iVar5);
        FUN_005417e0(puVar9,iVar6);
        fVar10 = (float10)FUN_0053f230(0);
        fStack_38 = (float)fVar10;
        uVar13 = 9;
        uVar12 = 0;
        uVar11 = 0;
        puVar9 = auStack_18;
LAB_004a45a4:
        iVar8 = param_1[3];
        iVar7 = param_1[2];
LAB_004a45aa:
        FUN_0054d020(iVar7,iVar8,puVar9,fStack_38,uVar11,uVar12,0x42a00000,uVar13,0,0,0);
      }
      else {
        puVar9 = auStack_24;
        iVar6 = iVar5;
        (**(code **)(*param_1 + 0x154))(puVar9,iVar5);
        FUN_005417e0(puVar9,iVar6);
        fVar10 = (float10)FUN_0053f230(0);
        fStack_38 = (float)fVar10;
        iVar6 = (**(code **)(*param_1 + 0x154))();
        if (DAT_006e92e8 < *(float *)(iVar6 + 0x28)) {
          fStack_38 = *(float *)(iVar6 + 0x28) * fStack_38;
        }
        uVar13 = 7;
        if (param_1[0x6d] == 5) {
          uVar12 = 0;
          uVar11 = 0x40000000;
          puVar9 = auStack_24;
          goto LAB_004a45a4;
        }
        iVar6 = param_1[0x6c];
        iVar8 = param_1[3];
        if (iVar6 != 0x29) {
          if (iVar6 == 0x2a) {
            FUN_0054d020(param_1[2],iVar8,auStack_24,fStack_38,0x40000000,0,0x42a00000,7,0,0,0);
            iVar6 = FUN_00647b10(0,100);
            if (iVar6 < 0x32) {
              uVar13 = 0xf;
              uVar12 = 0x40a00000;
              uVar11 = 0x40000000;
              puVar9 = auStack_24;
              goto LAB_004a45a4;
            }
            goto LAB_004a45b7;
          }
          iVar7 = param_1[2];
          if (iVar6 == 0x41) {
            uVar12 = 0x41c80000;
            uVar11 = 0x40000000;
            puVar9 = auStack_24;
          }
          else {
            uVar12 = 0x3f800000;
            uVar11 = 0x40000000;
            puVar9 = auStack_24;
          }
          goto LAB_004a45aa;
        }
        FUN_0054d020(param_1[2],iVar8,auStack_24,fStack_38,0x41000000,0,0x42a00000,7,0,0,0);
        iVar6 = FUN_00647b10(0,100);
        if (iVar6 < 0x4b) {
          uVar13 = 0xf;
          uVar12 = 0x40c00000;
          uVar11 = 0x40c00000;
          puVar9 = auStack_24;
          goto LAB_004a45a4;
        }
      }
LAB_004a45b7:
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

