
void __thiscall
FUN_0058fdf0(int param_1,undefined4 param_2,undefined4 param_3,ushort *param_4,undefined4 param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined6 uVar3;
  int local_268;
  undefined1 local_258 [512];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_14;
  undefined1 local_10 [4];
  int local_c;
  
  FUN_0064e7d0(s__________________________________0074259c);
  FUN_0064e7d0();
  FUN_0064e7d0(s__________________________________0074259c);
  uVar1 = FUN_0054dca0(param_5);
  pcVar2 = s_ObjectType___s_00742554;
  FUN_0064e7d0();
  FUN_0064e7d0(s_GUID___08X__08X_0074253c,param_3,param_2,pcVar2,uVar1);
  local_268 = 0;
  if (param_4[1] != 0) {
    do {
      local_58 = 0x7f7fffff;
      local_54 = 0x7f7fffff;
      local_50 = 0x7f7fffff;
      local_4c = 0xff7fffff;
      local_48 = 0xff7fffff;
      local_44 = 0xff7fffff;
      uVar3 = FUN_0058ef30(*(undefined2 *)
                            (((uint)*param_4 + local_268) * 2 + *(int *)(param_1 + 0x38)));
      uVar1 = (undefined4)uVar3;
      switch((short)((uint6)uVar3 >> 0x20)) {
      case 1:
      case 0xc:
        FUN_0063cea0(&local_14);
        FUN_0064e7d0(s_U32___8d_NAME__s_00742520,local_14,uVar1);
        break;
      case 2:
      case 10:
        FUN_0063d070(local_10);
        FUN_0064e7d0();
        break;
      case 3:
        local_c = FUN_0063d990();
        pcVar2 = &DAT_0071d3b4;
        if (local_c == 0) {
          pcVar2 = s_FALSE_0071d3ac;
        }
        FUN_0064e7d0(s_XBOOL___s_NAME__s_007424ec,pcVar2,uVar1);
        break;
      case 4:
      case 6:
      case 7:
      case 0xd:
      case 0xe:
        FUN_0063d790(local_258);
        FUN_0064e7d0(s_STR___s_NAME__s_007424d4,local_258,uVar1);
        break;
      case 8:
        FUN_0063d440(&local_3c);
        FUN_0064e7d0(s_V3___f__f__f_NAME__s_007424b8,(double)local_3c,(double)local_38,
                     (double)local_34,uVar1);
        break;
      case 9:
        FUN_0063d440(&local_58);
        FUN_0063d440(&local_4c);
        FUN_0064e7d0(s_BBOX__NAME__s_0074249c,local_258,uVar1);
        break;
      case 0xb:
        FUN_0063d590(&local_30);
        FUN_0064e7d0(s_R3___f__f__f_NAME__s_00742480,(double)local_30,(double)local_2c,
                     (double)local_28,uVar1);
        break;
      case 0xf:
      case 0x10:
        FUN_0063ccd0();
        FUN_0064e7d0();
        break;
      case 0x11:
        FUN_0063d1a0(&local_40);
        FUN_0064e7d0(s_COLOR___d__d__d__d_NAME__s_00742440,local_3e,local_3f,local_40,local_3d,
                     local_258,uVar1);
      }
      local_268 = local_268 + 1;
    } while (local_268 < (int)(uint)param_4[1]);
  }
  FUN_0064e7d0(s__________________________________0074259c);
  return;
}

