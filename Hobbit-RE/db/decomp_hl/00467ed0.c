
void __thiscall FUN_00467ed0(int *param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined1 *puVar7;
  int *piVar8;
  int aiStack_30 [3];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 auStack_18 [12];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d0da8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_CharacterObject__OnAdvanceLogic_007267dc);
  local_4 = 0;
  if (param_1[0x67] != -1) {
    iVar4 = FUN_0065a420(param_1[0x67]);
    if (iVar4 != 0) {
      aiStack_30[0] = param_1[0x4f];
      FUN_0065a480(param_1[0x67]);
      aiStack_30[0] = __ftol();
      fVar6 = (float10)FUN_0064c6b0((float)aiStack_30[0],(float)param_1[0x4f] - DAT_006e92e8);
      param_1[0x50] = (int)(float)fVar6;
      goto LAB_00467f97;
    }
  }
  fVar6 = (float10)FUN_0064c6b0(0,(float)param_1[0x4f] - DAT_006e92e8);
  param_1[0x50] = (int)(float)fVar6;
  (**(code **)(param_1[0x4c] + 0x10))(0);
LAB_00467f97:
  if (0 < param_1[0x3c]) {
    iVar4 = FUN_00659e10(param_1[0x3c]);
    if (iVar4 == 0) {
      (**(code **)(*param_1 + 0x100))();
      (**(code **)(*param_1 + 0xf8))(0);
      param_1[0x3c] = -1;
    }
  }
  if (param_1[0x4a] != 0) {
    piVar8 = aiStack_30;
    puVar7 = auStack_18;
    aiStack_30[0] = 0;
    (**(code **)(*param_1 + 0x154))(param_2,puVar7,piVar8);
    FUN_00540900(param_2,puVar7,piVar8);
    if ((*(byte *)(param_1 + 0x4b) & 2) == 0) {
      iVar4 = param_1[0x4a];
      if (DAT_006e92e4 < (float)*(int *)(iVar4 + 0xe0)) {
        iVar5 = FUN_00549470(iVar4 + 0xd0);
        FUN_00549580(iVar4 + 0xd0);
        iVar2 = param_1[0x4a];
        sVar1 = *(short *)(*(int *)(iVar4 + 0xd4) * 0x50 + 0x24 + *(int *)(iVar5 + 0x58));
        *(int *)(iVar2 + 0x138) = *(int *)(iVar2 + 0x138) + 1;
        *(undefined4 *)(iVar2 + 300) = 1;
        *(undefined4 *)(iVar2 + 0x13c) = 1;
        *(int *)(iVar2 + 0x148) = *(int *)(iVar2 + 0x148) + 1;
        fVar6 = (float10)FUN_0064c6b0((float)(sVar1 + -2),
                                      (float)*(int *)(iVar2 + 0xd8) - DAT_006e92e8);
        *(float *)(iVar2 + 0xdc) = (float)fVar6;
      }
    }
    if ((*(byte *)(param_1 + 0x4b) & 1) != 0) {
      iVar4 = (**(code **)(*param_1 + 0x154))();
      *(int *)(iVar4 + 0x138) = *(int *)(iVar4 + 0x138) + 1;
      *(undefined4 *)(iVar4 + 300) = 1;
      *(undefined4 *)(iVar4 + 0x13c) = 1;
      *(int *)(iVar4 + 0x148) = *(int *)(iVar4 + 0x148) + 1;
      *(undefined4 *)(iVar4 + 0x10) = 0;
      *(undefined4 *)(iVar4 + 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x18) = 0;
      iVar4 = (**(code **)(*param_1 + 0x154))();
      *(int *)(iVar4 + 0x148) = *(int *)(iVar4 + 0x148) + 1;
      *(undefined4 *)(iVar4 + 300) = 1;
      *(int *)(iVar4 + 0x138) = *(int *)(iVar4 + 0x138) + 1;
      *(undefined4 *)(iVar4 + 0x13c) = 1;
      *(undefined4 *)(iVar4 + 0x20) = 0;
      iVar4 = (**(code **)(*param_1 + 0x154))();
      if (*(int *)(iVar4 + 0x13c) != 0) {
        FUN_005423d0();
      }
      puVar3 = *(undefined4 **)(iVar4 + 0x140);
      uStack_24 = *puVar3;
      uStack_20 = puVar3[1];
      uStack_1c = puVar3[2];
      (**(code **)(*param_1 + 0x14))(&uStack_24,0);
    }
    param_1[0x3a] = param_1[0x3a] & 0xfffffffb;
    FUN_00575440(param_1[0x4a],param_1[2],param_1[3],param_1 + 5,param_1 + 5);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

