
void __fastcall FUN_00584060(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc2a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_render_mgr__DisplayTriangleStats_00740964);
  local_4 = 0;
  FUN_0064f0d0(0x28,2,s_____TRIANGLE_STATS_____0074094c);
  FUN_0064f0d0(0x28,3,s_Total___06d_00740938,*(undefined4 *)(param_1 + 8));
  FUN_0064f0d0(0x28,4,s_RigidInst___06d__04d_0074091c,*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x20));
  FUN_0064f0d0(0x28,5,s_Playsurface___06d__04d_00740900,*(undefined4 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x24));
  FUN_0064f0d0(0x28,6,s_NPC___06d__04d_007408e4,*(undefined4 *)(param_1 + 0x14),
               *(undefined4 *)(param_1 + 0x2c));
  FUN_0064f0d0(0x28,7,s_Water___06d__04d_007408c8,*(undefined4 *)(param_1 + 0x18),
               *(undefined4 *)(param_1 + 0x30));
  FUN_0064f0d0(0x28,8,s_TreeCluster___06d__04d_007408ac,*(undefined4 *)(param_1 + 0x1c),
               *(undefined4 *)(param_1 + 0x34));
  FUN_0064f0d0(0x28,9,s_Unaccounted___06d_00740898,
               *(int *)(param_1 + 8) -
               (*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0xc) +
                *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10)));
  FUN_0064f0d0(0x28,10,s________________________00740880);
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

