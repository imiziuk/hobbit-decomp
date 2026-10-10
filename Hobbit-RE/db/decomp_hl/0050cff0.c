
void __thiscall FUN_0050cff0(int param_1,int param_2)

{
  char *pcVar1;
  CRect aCStack_28 [16];
  undefined4 uStack_18;
  int *piStack_14;
  undefined1 *puStack_10;
  int local_8;
  int local_4;
  
  puStack_10 = (undefined1 *)&local_8;
  piStack_14 = &local_4;
  uStack_18 = 0x50d005;
  FUN_0065f8a0();
  if (param_2 == *(int *)(param_1 + 0x158)) {
    puStack_10 = (undefined1 *)0x1;
    piStack_14 = (int *)s_OptionSelect_00723150;
    uStack_18 = 0x50d027;
    FUN_00659600();
    puStack_10 = (undefined1 *)0x1;
    piStack_14 = (int *)DAT_00813038;
    uStack_18 = 0x50d03b;
    FUN_006a16c0();
    puStack_10 = (undefined1 *)0x5;
    piStack_14 = (int *)0x50d047;
    FUN_0052a630();
    return;
  }
  if (param_2 != *(int *)(param_1 + 0x15c)) {
    if (param_2 == *(int *)(param_1 + 0x160)) {
      puStack_10 = (undefined1 *)0x1;
      piStack_14 = (int *)s_OptionSelect_00723150;
      uStack_18 = 0x50d0c1;
      FUN_00659600();
      puStack_10 = (undefined1 *)0x0;
      piStack_14 = (int *)0x15;
      uStack_18 = 0;
      CRect::CRect(aCStack_28,0x10,0x10,local_4 + -0x10,local_8 + -0x10);
      pcVar1 = s_front_options_video_pc_00732e08;
    }
    else if (param_2 == *(int *)(param_1 + 0x164)) {
      puStack_10 = (undefined1 *)0x1;
      piStack_14 = (int *)s_OptionSelect_00723150;
      uStack_18 = 0x50d108;
      FUN_00659600();
      puStack_10 = (undefined1 *)0x0;
      piStack_14 = (int *)0x5;
      uStack_18 = 0;
      CRect::CRect(aCStack_28,0x10,0x10,local_4 + -0x10,local_8 + -0x10);
      pcVar1 = s_options_camera_00732df8;
    }
    else if (param_2 == *(int *)(param_1 + 0x168)) {
      puStack_10 = (undefined1 *)0x1;
      piStack_14 = (int *)s_OptionSelect_00723150;
      uStack_18 = 0x50d14f;
      FUN_00659600();
      puStack_10 = (undefined1 *)0x0;
      piStack_14 = (int *)0x15;
      uStack_18 = 0;
      CRect::CRect(aCStack_28,0x10,0x10,local_4 + -0x10,local_8 + -0x10);
      pcVar1 = s_front_controls_menu_007329f4;
    }
    else {
      if (param_2 != *(int *)(param_1 + 0x16c)) {
        return;
      }
      puStack_10 = (undefined1 *)0x1;
      piStack_14 = (int *)s_OptionSelect_00723150;
      uStack_18 = 0x50d193;
      FUN_00659600();
      puStack_10 = (undefined1 *)0x0;
      piStack_14 = (int *)0x15;
      uStack_18 = 0;
      CRect::CRect(aCStack_28,0x10,0x10,local_4 + -0x10,local_8 + -0x10);
      pcVar1 = s_front_performance_pc_00732de0;
    }
    FUN_006a1430(DAT_00813038,pcVar1);
    return;
  }
  puStack_10 = (undefined1 *)0x1;
  piStack_14 = (int *)s_OptionSelect_00723150;
  uStack_18 = 0x50d067;
  FUN_00659600();
  puStack_10 = (undefined1 *)0x0;
  piStack_14 = (int *)0x5;
  uStack_18 = 0;
  CRect::CRect(aCStack_28,0x10,0x10,local_4 + -0x10,local_8 + -0x10);
  FUN_006a1430(DAT_00813038,s_options_audio_00732e20);
  return;
}

