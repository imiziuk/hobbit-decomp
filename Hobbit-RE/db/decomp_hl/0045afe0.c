
undefined4 * __thiscall FUN_0045afe0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_4c0 [4];
  undefined4 uStack_4bc;
  undefined1 auStack_4b4 [580];
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 auStack_25c [127];
  undefined1 uStack_5d;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [12];
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [16];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006d04cb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar1 = FUN_00647e40(param_3,s_Is_Running_00725b20);
  if (iVar1 == 0) {
    FUN_00406a80();
    uStack_268 = *(undefined4 *)(param_1 + 0x160);
    uStack_4bc = 3;
    *param_2 = 3;
    FUN_00424770(auStack_4b4);
  }
  else {
    iVar1 = FUN_00647e40(param_3,s_Continuous_00725a80);
    if (iVar1 == 0) {
      FUN_00406a80();
      uStack_268 = *(undefined4 *)(param_1 + 0x164);
      uStack_4bc = 3;
      *param_2 = 3;
      FUN_00424770(auStack_4b4);
    }
    else {
      iVar1 = FUN_00647e40(param_3,s_Pain_Radius_00725af0);
      if (iVar1 == 0) {
        FUN_00406a80();
        uStack_26c = *(undefined4 *)(param_1 + 0x194);
      }
      else {
        iVar1 = FUN_00647e40(param_3,s_Pain_Damage_00725ae4);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_26c = *(undefined4 *)(param_1 + 0x198);
          uStack_4bc = 2;
          *param_2 = 2;
          FUN_00424770(auStack_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        iVar1 = FUN_00647e40(param_3,s_Time_of_Animations_00725b0c);
        if (iVar1 == 0) {
          FUN_00406a80();
          uStack_26c = *(undefined4 *)(param_1 + 0x184);
          uStack_4bc = 2;
          *param_2 = 2;
          FUN_00424770(auStack_4b4);
          ExceptionList = pvStack_c;
          return param_2;
        }
        iVar1 = FUN_00647e40(param_3,s_Timer_Offset_00725afc);
        if (iVar1 != 0) {
          iVar1 = FUN_00647e40(param_3,s_Number_of_Animations_00725acc);
          if (iVar1 == 0) {
            FUN_00406a80();
            uStack_270 = *(undefined4 *)(param_1 + 0x170);
            uStack_4bc = 1;
            *param_2 = 1;
            FUN_00424770(auStack_4b4);
            ExceptionList = pvStack_c;
            return param_2;
          }
          iVar1 = 0;
          if (0 < *(int *)(param_1 + 0x170)) {
            do {
              FUN_00649920(auStack_4c0,s_Animation__d_00725abc,iVar1);
              uStack_4 = 0;
              uVar2 = FUN_00649940();
              iVar3 = FUN_00647e40(param_3,uVar2);
              uStack_4 = 0xffffffff;
              FUN_00649950();
              if (iVar3 == 0) {
                FUN_00406a80();
                uStack_264 = 4;
                FUN_00647d70(auStack_25c,*(undefined4 *)(iVar1 * 0x2c + *(int *)(param_1 + 0x174)),
                             0x200);
                uStack_5d = 0;
                *param_2 = uStack_264;
                puVar4 = auStack_25c;
                puVar5 = param_2 + 2;
                for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
                  *puVar5 = *puVar4;
                  puVar4 = puVar4 + 1;
                  puVar5 = puVar5 + 1;
                }
                FUN_004357e0(auStack_5c);
                FUN_004357e0(auStack_50);
                *(undefined1 *)((int)param_2 + 0x223) = uStack_41;
                *(undefined1 *)((int)param_2 + 0x222) = uStack_42;
                *(undefined1 *)((int)param_2 + 0x221) = uStack_43;
                *(undefined1 *)(param_2 + 0x88) = uStack_44;
                param_2[0x89] = uStack_40;
                param_2[0x8a] = uStack_3c;
                param_2[0x8b] = uStack_38;
                FUN_004357e0(auStack_34);
                param_2[0x91] = uStack_20;
                param_2[0x90] = uStack_24;
                param_2[0x92] = uStack_1c;
                param_2[0x94] = uStack_14;
                param_2[0x93] = uStack_18;
                param_2[0x95] = uStack_10;
                ExceptionList = pvStack_c;
                return param_2;
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 < *(int *)(param_1 + 0x170));
          }
          FUN_004c5ba0(param_2,param_3);
          ExceptionList = pvStack_c;
          return param_2;
        }
        FUN_00406a80();
        uStack_26c = *(undefined4 *)(param_1 + 0x188);
      }
      uStack_4bc = 2;
      *param_2 = 2;
      FUN_00424770(auStack_4b4);
    }
  }
  ExceptionList = pvStack_c;
  return param_2;
}

