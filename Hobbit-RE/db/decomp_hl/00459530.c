
undefined4 * __thiscall FUN_00459530(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_4c0 [4];
  undefined4 uStack_4bc;
  undefined1 auStack_4b4 [511];
  undefined1 uStack_2b5;
  undefined4 uStack_27c;
  undefined4 uStack_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  uint uStack_268;
  undefined4 uStack_264;
  undefined1 auStack_25c [540];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d039b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00647e40(param_3,s_IsEnabled_007259d4);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_268 = *(uint *)(param_1 + 0x10c) >> 1 & 1;
    uStack_4bc = 3;
    *param_2 = 3;
    FUN_00424770(auStack_4b4);
    ExceptionList = pvStack_c;
    return param_2;
  }
  iVar1 = FUN_00647e40(param_3,s_Trigger_Radius_00725990);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_26c = *(undefined4 *)(param_1 + 0xac);
  }
  else {
    iVar1 = FUN_00647e40(param_3,s_Near_Radius_00725984);
    if (iVar1 == 0) {
      FUN_00406a80();
      uStack_26c = *(undefined4 *)(param_1 + 0xb0);
      uStack_4bc = 2;
      *param_2 = 2;
      FUN_00424770(auStack_4b4);
      ExceptionList = pvStack_c;
      return param_2;
    }
    iVar1 = FUN_00647e40(param_3,s_Far_Radius_00725978);
    if (iVar1 == 0) {
      FUN_00406a80();
      uStack_26c = *(undefined4 *)(param_1 + 0xb4);
LAB_0045967a:
      uStack_4bc = 2;
      *param_2 = 2;
      FUN_00424770(auStack_4b4);
      ExceptionList = pvStack_c;
      return param_2;
    }
    iVar1 = FUN_00647e40(param_3,s_Offset_Radius_00725968);
    if (iVar1 == 0) {
      FUN_00406a80();
      uStack_26c = *(undefined4 *)(param_1 + 0xb8);
    }
    else {
      iVar1 = FUN_00647e40(param_3,s_Create_Sounds_Outside_Offset_00725948);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_268 = *(uint *)(param_1 + 0xc4) >> 4 & 1;
        uStack_4bc = 3;
        *param_2 = 3;
        FUN_00424770(auStack_4b4);
        ExceptionList = pvStack_c;
        return param_2;
      }
      iVar1 = FUN_00647e40(param_3,s_Min_Time_Delay_00725938);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_26c = *(undefined4 *)(param_1 + 0xbc);
        goto LAB_0045967a;
      }
      iVar1 = FUN_00647e40(param_3,s_Max_Time_Delay_00725928);
      if (iVar1 != 0) {
        iVar1 = FUN_00647e40(param_3,s_Scale_Mode_007259f8);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_270 = *(undefined4 *)(param_1 + 0xa8);
          uStack_4bc = 0xc;
          *param_2 = 0xc;
          FUN_00424770(auStack_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        iVar1 = FUN_00647e40(param_3,s_Loops_007259f0);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_4bc = 3;
          uVar4 = FUN_004584b0();
LAB_00459b9c:
          uStack_268 = (uint)uVar4;
          *param_2 = (int)((ulonglong)uVar4 >> 0x20);
          FUN_00424770(auStack_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        iVar1 = FUN_00647e40(param_3,s_Playback_Mode_007259e0);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_270 = *(undefined4 *)(param_1 + 200);
          uStack_4bc = 0xc;
          *param_2 = 0xc;
          FUN_00424770(auStack_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        iVar1 = FUN_00647e40(param_3,s_Loop_Fade_Out_Time_00725914);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_26c = *(undefined4 *)(param_1 + 0xcc);
          uStack_4bc = 2;
          *param_2 = 2;
          FUN_00424770(auStack_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        iVar1 = FUN_00647e40(param_3,s_Loop_Fade_Out_Volume_007258fc);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_26c = *(undefined4 *)(param_1 + 0xd0);
          uStack_4bc = 2;
          *param_2 = 2;
          FUN_00424770(auStack_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        iVar1 = FUN_00647e40(param_3,s_Play_Only_Once_007258d4);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_268 = (uint)(*(int *)(param_1 + 200) == 3);
          uStack_4bc = 3;
          *param_2 = 3;
          FUN_00424770(auStack_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        iVar1 = FUN_00647e40(param_3,s_Freeze_Timer_During_Playback_007258b4);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_268 = *(uint *)(param_1 + 0xc4) >> 3 & 1;
          uStack_4bc = 3;
          *param_2 = 3;
          FUN_00424770(auStack_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        iVar1 = FUN_00647e40(param_3,s_Height_stays_constant_007258e4);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_268 = *(uint *)(param_1 + 0xc4) >> 2 & 1;
          uStack_4bc = 3;
          *param_2 = 3;
          FUN_00424770(auStack_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        iVar1 = FUN_00647e40(param_3,s_Audio_List_Size_007259c4);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_270 = *(undefined4 *)(param_1 + 0xf4);
          uStack_4bc = 1;
          *param_2 = 1;
          FUN_00424770(auStack_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        iVar1 = 0;
        if (0 < *(int *)(param_1 + 0xf4)) {
          do {
            FUN_00649920(auStack_4c0,s_Audio_List_SoundName__d_007259a0,iVar1);
            uStack_4 = 0;
            uVar2 = FUN_00649940();
            iVar3 = FUN_00647e40(param_3,uVar2);
            uStack_4 = 0xffffffff;
            FUN_00649950();
            if (iVar3 == 0) {
              FUN_00406a80();
              uStack_4bc = 4;
              FUN_00647d70(auStack_4b4,*(undefined4 *)(*(int *)(param_1 + 0xf8) + iVar1 * 0x2c),
                           0x200);
              uVar4 = CONCAT44(uStack_4bc,uStack_268);
              uStack_2b5 = 0;
              goto LAB_00459b9c;
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(param_1 + 0xf4));
        }
        iVar1 = FUN_00647e40(param_3,s_Attach_to_Object_007258a0);
        if (iVar1 == 0) {
          FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
          FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
          uStack_27c = *(undefined4 *)(param_1 + 0xd8);
          uStack_278 = *(undefined4 *)(param_1 + 0xdc);
          uStack_4bc = 0xf;
          *param_2 = 0xf;
          FUN_00424770(auStack_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        FUN_00404870(0x7f7fffff,0x7f7fffff,0x7f7fffff);
        FUN_00404870(0xff7fffff,0xff7fffff,0xff7fffff);
        iVar1 = FUN_00647cf0(s_Attach_Offset_00725890);
        iVar3 = FUN_00647e80(param_3,s_Attach_Offset_00725890,iVar1);
        if (iVar3 == 0) {
          iVar3 = FUN_00647cf0(param_3);
          if (iVar1 == iVar3) {
            uStack_40 = *(undefined4 *)(param_1 + 0xe0);
            uStack_3c = *(undefined4 *)(param_1 + 0xe4);
            uStack_38 = *(undefined4 *)(param_1 + 0xe8);
            uStack_264 = 8;
          }
          else {
            iVar1 = iVar1 + param_3;
            iVar3 = FUN_00647e40(&DAT_00724e78,iVar1);
            if (iVar3 == 0) {
              uStack_14 = *(undefined4 *)(param_1 + 0xe0);
            }
            else {
              iVar3 = FUN_00647e40(&DAT_00724e74,iVar1);
              if (iVar3 == 0) {
                uStack_14 = *(undefined4 *)(param_1 + 0xe4);
              }
              else {
                iVar1 = FUN_00647e40(&DAT_00724e70,iVar1);
                if (iVar1 != 0) goto LAB_00459cc3;
                uStack_14 = *(undefined4 *)(param_1 + 0xe8);
              }
            }
            uStack_264 = 2;
          }
          *param_2 = uStack_264;
          FUN_00424770(auStack_25c);
          ExceptionList = pvStack_c;
          return param_2;
        }
LAB_00459cc3:
        FUN_004abdf0(param_2,param_3);
        ExceptionList = pvStack_c;
        return param_2;
      }
      FUN_00406a80();
      uStack_26c = *(undefined4 *)(param_1 + 0xc0);
    }
  }
  uStack_4bc = 2;
  *param_2 = 2;
  FUN_00424770(auStack_4b4);
  ExceptionList = pvStack_c;
  return param_2;
}

