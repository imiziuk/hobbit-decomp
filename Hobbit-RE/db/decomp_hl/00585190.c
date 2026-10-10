
void FUN_00585190(void)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006dc668;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_00649600(s_render_mgr__RenderSkybox_00740f3c);
  local_4 = 0;
  iVar3 = FUN_0065f190(s_Skybox_0072d550);
  if (iVar3 != 0) {
    piVar5 = (int *)0x0;
    FUN_00587d00(0);
    FUN_00661f20("FarClip",0x461c4000,2);
    uVar4 = FUN_0054c5c0(0x36,s_C__projects_meridian_Support_Gam_00740e7c,0x606);
    sVar2 = FUN_0054c7c0();
    while (-1 < sVar2) {
      if (sVar2 == -1) {
        piVar5 = (int *)0x0;
      }
      else {
        uVar1 = *(uint *)(DAT_0076f648 + sVar2 * 0x14);
        if (uVar1 == 0) {
          piVar5 = (int *)0x0;
        }
        else {
          piVar5 = (int *)(-(uint)((*(byte *)(uVar1 + 0x7f) & 0x10) != 0) & uVar1);
        }
      }
      (**(code **)(*piVar5 + 0x60))();
      sVar2 = FUN_0054c7c0();
    }
    FUN_0054c880(uVar4);
    if (piVar5 != (int *)0x0) {
      FUN_005c33e0();
      FUN_005c3d30();
    }
    FUN_0065f430();
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = pvStack_c;
  return;
}

