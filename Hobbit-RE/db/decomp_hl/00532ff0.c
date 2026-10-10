
void __fastcall FUN_00532ff0(int param_1)

{
  int *piVar1;
  float fVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  void *unaff_ESI;
  float10 fVar8;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d8af8;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_music_mgr__OnUpdate_00736f6c);
  local_4 = 0;
  FUN_00533290();
  if ((((DAT_007644cc != 0) || (DAT_007644c8 != 0)) || (*(int *)(param_1 + 0xbc) == 0)) ||
     (DAT_00736e78 != 0)) {
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = pvStack_c;
    return;
  }
  iVar4 = FUN_00659e10(*(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1));
  iVar5 = FUN_00659e70(*(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1));
  iVar6 = FUN_00659ed0(*(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1));
  puVar3 = puStack_8;
  if (((iVar4 == 0) && (iVar5 == 0)) || (iVar6 == 1)) {
    iVar4 = *(int *)(param_1 + 0x1ac) * 0x30;
    iVar5 = iVar4 + param_1;
    if ((*(int *)(iVar4 + 0x16c + param_1) != 0) || (*(int *)(iVar5 + 0x14c) == 0)) {
      iVar4 = FUN_00659f30(*(undefined4 *)(iVar5 + 0x14c));
      if (iVar4 == 0) {
        if (*(int *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1) == 0) {
          FUN_00532830();
        }
        *(undefined4 *)(param_1 + 0x1b0) = 1;
        uVar7 = FUN_00531430();
        *(undefined4 *)(param_1 + 0x1ac) = uVar7;
        FUN_00532cf0();
        goto LAB_00533246;
      }
    }
    FUN_00659db0(*(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x14c + param_1));
    *(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x174 + param_1) = 0;
    *(undefined4 *)(param_1 + 0x1dc) = 0;
    *(undefined4 *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x16c + param_1) = 1;
  }
  else {
    piVar1 = (int *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x174 + param_1);
    if (*piVar1 == 0) {
      *piVar1 = 1;
      *(int *)(param_1 + 0x1dc) = *(int *)(param_1 + 0x1dc) + 1;
    }
    FUN_00532e60(puStack_8);
    iVar4 = *(int *)(param_1 + 0x1ac) * 0x30;
    fVar2 = *(float *)(iVar4 + 0x164 + param_1);
    if ((NAN(fVar2) || NAN(DAT_006e92e4)) != (fVar2 == DAT_006e92e4)) {
      fVar8 = (float10)FUN_00658020(*(undefined4 *)(iVar4 + param_1 + 0x14c));
      *(float *)(*(int *)(param_1 + 0x1ac) * 0x30 + 0x164 + param_1) = (float)fVar8;
    }
    iVar4 = *(int *)(param_1 + 0x1ac) * 0x30;
    *(float *)(iVar4 + 0x15c + param_1) = (float)puStack_8 + *(float *)(iVar4 + 0x15c + param_1);
    FUN_00532830();
    FUN_00532b40(puVar3);
  }
LAB_00533246:
  FUN_00649720();
  ExceptionList = unaff_ESI;
  return;
}

