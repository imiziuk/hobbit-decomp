
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00679ad0(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6d58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_audio_voice_mgr__UpdateStartPend_00752b3c);
  iVar5 = *(int *)(param_1 + 0x14);
  local_4 = 0;
  if ((iVar5 != 0) && (iVar5 != param_1 + 0xc)) {
    do {
      if (*(float *)(param_1 + 0xec) <= *(float *)(iVar5 + 0x90)) break;
      iVar1 = *(int *)(iVar5 + 4);
      if (*(int *)(iVar5 + 0x94) == 0) {
        if ((*(int *)(iVar5 + 0x88) == 2) ||
           (*(float *)(param_1 + 0xec) - *(float *)(iVar5 + 0x90) <= _DAT_006e9550)) {
          iVar4 = *(int *)(iVar5 + 0x10);
          if (iVar4 == 0) {
            iVar4 = FUN_0067aa90(iVar5);
            if (iVar4 == 0) goto LAB_00679c48;
            iVar4 = *(int *)(iVar5 + 0x10);
          }
          iVar2 = *(int *)(iVar5 + 8);
          fVar3 = *(float *)(iVar2 + 0x8c) * *(float *)(iVar5 + 0x74) * *(float *)(iVar5 + 0x6c) *
                  *(float *)(iVar5 + 0x24);
          if (0 < DAT_007eda44) {
            fVar3 = fVar3 * *(float *)(iVar5 + 0x34);
          }
          *(float *)(iVar5 + 0x70) = fVar3;
          *(float *)(iVar5 + 0x78) =
               *(float *)(iVar2 + 0x94) * *(float *)(iVar5 + 0x7c) * *(float *)(iVar5 + 0x1c);
          *(float *)(iVar5 + 0x80) = *(float *)(iVar2 + 0x9c) * *(float *)(iVar5 + 0x44);
          if (*(int *)(iVar2 + 0xc4) == 0) {
            FUN_006592a0(*(undefined4 *)(iVar5 + 0x3c),iVar5 + 0x5c);
          }
          FUN_0067ada0(iVar4,*(undefined4 *)(iVar5 + 0x70));
          FUN_0067ae80(iVar4,*(undefined4 *)(iVar5 + 0x78));
          FUN_0067ae40(iVar4,iVar5 + 0x5c);
          FUN_0067aef0(iVar4,*(undefined4 *)(iVar5 + 0x80));
          FUN_0067ad10(iVar4);
          *(undefined4 *)(iVar5 + 0x94) = 1;
        }
        else {
          FUN_00678390(iVar5,0);
        }
      }
LAB_00679c48:
      iVar5 = iVar1;
    } while (iVar1 != param_1 + 0xc);
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

