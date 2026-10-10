
void __thiscall FUN_004997c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00641760(s_Teleport_00729eec,*(undefined4 *)(param_1 + 0x138));
  FUN_004e2b70(param_2);
  FUN_006408e0(s_LoadLayers_00729ee0,*(undefined4 *)(param_1 + 0x108));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x108)) {
    iVar2 = 0;
    do {
      FUN_006414f0(s_Layer_00729ed8,*(undefined4 *)(*(int *)(param_1 + 0x10c) + iVar2));
      FUN_006412c0();
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (iVar1 < *(int *)(param_1 + 0x108));
  }
  FUN_006408e0(s_UnloadLayer_00729ecc,*(undefined4 *)(param_1 + 0x124));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x124)) {
    iVar2 = 0;
    do {
      FUN_006414f0(s_UnloadLayer_00729ecc,*(undefined4 *)(*(int *)(param_1 + 0x128) + iVar2));
      FUN_006412c0();
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (iVar1 < *(int *)(param_1 + 0x124));
  }
  FUN_006408e0(s_LoadResources_00729da8,*(undefined4 *)(param_1 + 0x150));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x150)) {
    iVar2 = 0;
    do {
      FUN_006414f0(s_LoadResources_00729da8,*(undefined4 *)(*(int *)(param_1 + 0x154) + iVar2));
      FUN_006412c0();
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (iVar1 < *(int *)(param_1 + 0x150));
  }
  FUN_006408e0(s_UnloadResources_00729d60,*(undefined4 *)(param_1 + 0x16c));
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x16c)) {
    iVar2 = 0;
    do {
      FUN_006414f0(s_UnloadResources_00729d60,*(undefined4 *)(*(int *)(param_1 + 0x170) + iVar2));
      FUN_006412c0();
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (iVar1 < *(int *)(param_1 + 0x16c));
  }
  return;
}

