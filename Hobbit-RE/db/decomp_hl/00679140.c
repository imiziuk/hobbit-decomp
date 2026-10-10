
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00679140(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int iStack_2c;
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006e6d18;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_audio_voice_mgr__Update_00752a90);
  local_4 = 0;
  FUN_00679ab0();
  iVar1 = *(int *)(param_1 + 4);
joined_r0x00679185:
  iVar5 = iVar1;
  if (iVar5 == param_1) {
    FUN_00679ac0();
    local_4 = 0xffffffff;
    FUN_00649720();
    ExceptionList = pvStack_c;
    return;
  }
  iVar1 = *(int *)(iVar5 + 4);
  FUN_00649600(s_audio_voice_mgr__UpdateCheckStre_00752b18);
  iVar6 = *(int *)(iVar5 + 0x10);
  local_4._0_1_ = 1;
  if (iVar5 + 0xc != iVar6) {
    do {
      iVar3 = 0;
      if (*(int *)(iVar6 + 0x94) == 3) {
        if (*(float *)(iVar6 + 0x90) <= *(float *)(iVar5 + 0xec) + _DAT_006e99b0) {
          iVar2 = *(int *)(iVar6 + 0x10);
          if (iVar2 != 0) {
            iStack_2c = *(int *)(iVar6 + 0xc);
            if (iStack_2c != 0) {
              iVar3 = *(int *)(iStack_2c + 0x10);
            }
            goto LAB_00679248;
          }
          *(undefined4 *)(iVar6 + 0x40) = 0xff;
          iVar2 = FUN_0067aa90(iVar6);
          if (iVar2 == 0) goto LAB_006793ba;
          iStack_2c = *(int *)(iVar6 + 0xc);
          iVar2 = *(int *)(iVar6 + 0x10);
          if (iStack_2c != 0) {
            *(undefined4 *)(iStack_2c + 0x40) = 0xff;
            iVar3 = FUN_0067aa90(iStack_2c);
            if (iVar3 != 0) {
              iVar3 = *(int *)(iStack_2c + 0x10);
              goto LAB_00679248;
            }
            FUN_0067ac40(*(undefined4 *)(iVar6 + 0x10));
            *(undefined4 *)(iVar6 + 0x10) = 0;
LAB_00679399:
            local_4 = (uint)local_4._1_3_ << 8;
            FUN_00649720();
            goto joined_r0x00679185;
          }
LAB_00679248:
          iVar4 = FUN_006777c0(*(undefined4 *)(*(int *)(iVar6 + 0x8c) + 4),
                               *(undefined4 *)(*(int *)(iVar6 + 0x8c) + 8),iVar2,iVar3);
          if (iVar4 != -1) {
            if (iVar4 == 0) {
              FUN_006795e0(iVar5,1);
              goto LAB_00679399;
            }
            FUN_00679980(iVar4,0);
            *(undefined4 *)(iVar6 + 0x94) = 4;
            *(int *)(iVar2 + 0x58) = iVar4;
            *(undefined4 *)(iVar2 + 0x60) = 1;
            *(undefined4 *)(iVar2 + 0x68) = 1;
            **(undefined4 **)(iVar2 + 0xc) = *(undefined4 *)(iVar4 + 0xe0);
            *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x20) = 0;
            *(undefined4 *)(*(int *)(iVar2 + 0xc) + 0x24) = 0x40000;
            FUN_0067bcc0(iVar2);
            if (iStack_2c != 0) {
              *(undefined4 *)(iVar2 + 0x60) = 0;
              FUN_00679980(iVar4,1);
              *(undefined4 *)(iStack_2c + 0x94) = 4;
              *(int *)(iVar3 + 0x58) = iVar4;
              *(undefined4 *)(iVar3 + 0x60) = 1;
              *(undefined4 *)(iVar3 + 0x68) = 1;
              **(undefined4 **)(iVar3 + 0xc) = *(undefined4 *)(iVar4 + 0xe8);
              *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x20) = 0;
              *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x24) = 0x40000;
              FUN_0067bcc0(iVar3);
            }
            *(undefined4 *)(iVar4 + 0x110) = 1;
          }
        }
      }
      else if (*(int *)(iVar6 + 0x94) == 5) {
        if (*(int *)(*(int *)(iVar6 + 0x10) + 0x58) == 0) {
          FUN_006795e0(iVar5,1);
LAB_006793ba:
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_00649720();
          goto joined_r0x00679185;
        }
        *(undefined4 *)(iVar6 + 0x94) = 0;
        if (*(int *)(iVar6 + 0xc) != 0) {
          *(undefined4 *)(*(int *)(iVar6 + 0xc) + 0x94) = 0;
        }
        *(uint *)(iVar5 + 0xdc) = *(uint *)(iVar5 + 0xdc) | 1;
      }
      iVar6 = *(int *)(iVar6 + 4);
    } while (iVar5 + 0xc != iVar6);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00649720();
  switch(*(undefined4 *)(iVar5 + 0xf0)) {
  case 1:
    FUN_00649600(s_audio_voice_mgr__UpdateStateStar_00752af0);
    local_4._0_1_ = 2;
    iVar5 = FUN_00679c80(iVar5);
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 0xf0) = 2;
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_00649720();
    if (iVar5 != 0) {
      *(float *)(iVar5 + 0xe8) = DAT_007eda48;
      fVar7 = 0.0;
      goto LAB_00679486;
    }
    goto joined_r0x00679185;
  case 2:
    *(float *)(iVar5 + 0xec) = param_2 + *(float *)(iVar5 + 0xec);
    fVar7 = param_2;
LAB_00679486:
    iVar5 = FUN_00679ec0(iVar5,fVar7);
    break;
  case 3:
    FUN_0067a540(iVar5,DAT_007eda48);
    break;
  case 5:
    goto switchD_006793eb_caseD_5;
  }
  goto switchD_006793eb_caseD_4;
switchD_006793eb_caseD_5:
  iVar5 = FUN_00679d70(iVar5);
  if (iVar5 == 0) goto joined_r0x00679185;
  *(float *)(iVar5 + 0xe8) = DAT_007eda48 - *(float *)(iVar5 + 0xe4);
  iVar5 = FUN_00679ec0(iVar5,0);
switchD_006793eb_caseD_4:
  if ((iVar5 != 0) && (*(int *)(iVar5 + 0xf0) == 2)) {
    FUN_00679ad0(iVar5);
  }
  goto joined_r0x00679185;
}

