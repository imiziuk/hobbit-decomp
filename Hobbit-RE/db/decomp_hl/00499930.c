
void __thiscall FUN_00499930(int param_1,int *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *local_220;
  undefined1 local_20c [512];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_006d3429;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00649600(s_load_trigger__OnImport_00729ef8);
  local_4 = 0;
  FUN_006405b0(s_Teleport_00729eec,param_1 + 0x138);
  *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x7a) | 1;
  FUN_004e2c00(param_2);
  *(ushort *)(param_1 + 0x7a) = *(ushort *)(param_1 + 0x7a) | 1;
  FUN_0063ff20();
  if (*param_2 == 0) {
    puVar2 = &DAT_0075b6e0;
  }
  else {
    puVar2 = *(undefined1 **)(*param_2 + param_2[2] * 4);
  }
  iVar1 = FUN_00647ed0(puVar2,s_LoadLayers_00729ee0);
  if (iVar1 == 0) {
    iVar1 = param_2[3];
    iVar4 = *(int *)(param_1 + 0x110);
    if (*(int *)(param_1 + 0x110) < iVar1) {
      iVar4 = iVar1;
    }
    FUN_00417750(iVar4);
    *(int *)(param_1 + 0x108) = iVar1;
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x108)) {
      do {
        FUN_0063ffc0();
        FUN_00640480(s_Layer_00729ed8,local_20c);
        FUN_0064a2e0(local_20c);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x108));
    }
  }
  FUN_0063ff20();
  if (*param_2 == 0) {
    puVar2 = &DAT_0075b6e0;
  }
  else {
    puVar2 = *(undefined1 **)(*param_2 + param_2[2] * 4);
  }
  iVar1 = FUN_00647ed0(puVar2,s_UnloadLayer_00729ecc);
  if (iVar1 == 0) {
    iVar1 = param_2[3];
    iVar4 = *(int *)(param_1 + 300);
    if (*(int *)(param_1 + 300) < iVar1) {
      iVar4 = iVar1;
    }
    FUN_00417750(iVar4);
    *(int *)(param_1 + 0x124) = iVar1;
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x124)) {
      do {
        FUN_0063ffc0();
        FUN_00640480(s_UnloadLayer_00729ecc,local_20c);
        FUN_0064a2e0(local_20c);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x124));
    }
  }
  FUN_0063ff20();
  if (*param_2 == 0) {
    puVar2 = &DAT_0075b6e0;
  }
  else {
    puVar2 = *(undefined1 **)(*param_2 + param_2[2] * 4);
  }
  iVar1 = FUN_00647ed0(puVar2,s_LoadResources_00729da8);
  if (iVar1 == 0) {
    iVar1 = param_2[3];
    iVar4 = *(int *)(param_1 + 0x158);
    if (*(int *)(param_1 + 0x158) < iVar1) {
      iVar4 = iVar1;
    }
    FUN_00417750(iVar4);
    *(int *)(param_1 + 0x150) = iVar1;
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x150)) {
      do {
        FUN_0063ffc0();
        FUN_00640480(s_LoadResources_00729da8,local_20c);
        FUN_0064a2e0(local_20c);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x150));
    }
  }
  FUN_0063ff20();
  if (*param_2 == 0) {
    puVar2 = &DAT_0075b6e0;
  }
  else {
    puVar2 = *(undefined1 **)(*param_2 + param_2[2] * 4);
  }
  iVar1 = FUN_00647ed0(puVar2,s_UnloadResources_00729d60);
  if (iVar1 == 0) {
    iVar1 = param_2[3];
    iVar4 = *(int *)(param_1 + 0x174);
    iVar5 = iVar4;
    if (iVar4 < iVar1) {
      iVar5 = iVar1;
    }
    if (iVar5 != iVar4) {
      piVar3 = (int *)operator_new(iVar5 * 0x2c + 4);
      local_4._0_1_ = 1;
      if (piVar3 == (int *)0x0) {
        local_220 = (int *)0x0;
      }
      else {
        local_220 = piVar3 + 1;
        *piVar3 = iVar5;
        FUN_006c043b(local_220,0x2c,iVar5,FUN_006499d0,FUN_00649ba0);
      }
      iVar4 = 0;
      local_4 = (uint)local_4._1_3_ << 8;
      if (0 < *(int *)(param_1 + 0x16c)) {
        iVar6 = 0;
        do {
          FUN_0064a320(*(int *)(param_1 + 0x170) + iVar6);
          iVar4 = iVar4 + 1;
          iVar6 = iVar6 + 0x2c;
        } while (iVar4 < *(int *)(param_1 + 0x16c));
      }
      if (*(int *)(param_1 + 0x170) != 0) {
        FUN_00407f70(3);
      }
      *(int **)(param_1 + 0x170) = local_220;
      *(int *)(param_1 + 0x174) = iVar5;
    }
    iVar4 = 0;
    *(int *)(param_1 + 0x16c) = iVar1;
    if (0 < iVar1) {
      do {
        FUN_0063ffc0();
        FUN_00640480(s_UnloadResources_00729d60,local_20c);
        FUN_0064a2e0(local_20c);
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x16c));
    }
  }
  local_4 = 0xffffffff;
  FUN_00649720();
  ExceptionList = local_c;
  return;
}

