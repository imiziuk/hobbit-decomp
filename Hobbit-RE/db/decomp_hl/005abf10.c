
undefined4 __thiscall FUN_005abf10(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00647e40(param_2,s_Senses_Tweaks_Do_Line_of_Sight_00744af0);
  if (iVar1 == 0) {
    if (*param_3 == 3) {
      *(uint *)(param_1 + 0x18) =
           (param_3[0x95] << 2 ^ *(uint *)(param_1 + 0x18)) & 4 ^ *(uint *)(param_1 + 0x18);
      return 1;
    }
  }
  else {
    iVar1 = FUN_00647e40(param_2,s_Senses_Tweaks_Sight_Range_Purple_00744acc);
    if (iVar1 == 0) {
      if (*param_3 == 2) {
        *(int *)(param_1 + 0x1c) = param_3[0x94];
        return 1;
      }
    }
    else {
      iVar1 = FUN_00647e40(param_2,s_Senses_Tweaks_Hearing_Range_Yell_00744aa8);
      if (iVar1 == 0) {
        if (*param_3 == 2) {
          *(int *)(param_1 + 0x24) = param_3[0x94];
          return 1;
        }
      }
      else {
        iVar1 = FUN_00647e40(param_2,s_Senses_Tweaks_Loud_Hearing_Range_00744a80);
        if (iVar1 == 0) {
          if (*param_3 == 2) {
            *(int *)(param_1 + 0x28) = param_3[0x94];
            return 1;
          }
        }
        else {
          iVar1 = FUN_00647e40(param_2,s_Senses_Tweaks_Smell_Range_Aqua__00744a60);
          if (iVar1 == 0) {
            if (*param_3 == 2) {
              *(int *)(param_1 + 0x30) = param_3[0x94];
              return 1;
            }
          }
          else {
            iVar1 = FUN_00647e40(param_2,s_Senses_Tweaks_ClearSenses_00744a44);
            if (iVar1 == 0) {
              *(undefined4 *)(param_1 + 0x10) = 0x42c80000;
              *(undefined4 *)(param_1 + 0x38) = 0;
              *(undefined4 *)(param_1 + 0x3c) = 0;
              *(undefined4 *)(param_1 + 8) = 0;
              *(undefined4 *)(param_1 + 0xc) = 0;
            }
          }
        }
      }
    }
  }
  return 0;
}

