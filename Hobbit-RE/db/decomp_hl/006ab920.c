
bool __thiscall FUN_006ab920(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  void *pvVar5;
  undefined1 auStack_64 [44];
  undefined1 auStack_38 [44];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e8168;
  pvStack_c = ExceptionList;
  piVar1 = (int *)(param_1 + 0x18);
  ExceptionList = &pvStack_c;
  _BinkSetSoundTrack_8(1,piVar1);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  FUN_006499d0();
  uStack_4 = 0;
  uVar3 = FUN_005496c0(param_2,&DAT_0075b6e0);
  FUN_0064a2e0(uVar3);
  puVar4 = (undefined4 *)FUN_0064a4f0(auStack_38,auStack_64,&DAT_007561b4);
  uVar3 = _BinkOpen_8(*puVar4,0x8004000);
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_00649ba0();
  if (*(int *)(param_1 + 0x1c) == 0) {
    puVar4 = (undefined4 *)FUN_0064a4f0(auStack_38,auStack_64,s__demo_bik_007561a8);
    uVar3 = _BinkOpen_8(*puVar4,0x8004000);
    *(undefined4 *)(param_1 + 0x1c) = uVar3;
    FUN_00649ba0();
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x1c) + 0xf0) <= *piVar1) {
      *piVar1 = 0;
      puVar4 = (undefined4 *)FUN_0064a4f0(auStack_38,auStack_64,&DAT_007561b4);
      uVar3 = _BinkOpen_8(*puVar4,0x8004000);
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
      FUN_00649ba0();
    }
    FUN_006abc60();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x24));
  piVar2 = *(int **)(param_1 + 0x1c);
  if (piVar2 != (int *)0x0) {
    pvVar5 = operator_new(piVar2[1] * *piVar2 * 4);
    *(void **)(param_1 + 0x20) = pvVar5;
    uVar3 = __ftol();
    _BinkSetVolume_12(*(undefined4 *)(param_1 + 0x1c),*piVar1,uVar3);
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    uStack_4 = 0xffffffff;
    FUN_00649ba0();
  }
  else {
    *(undefined4 *)(param_1 + 8) = 1;
    uStack_4 = 0xffffffff;
    FUN_00649ba0();
  }
  ExceptionList = pvStack_c;
  return piVar2 != (int *)0x0;
}

