
void __fastcall thunk_FUN_006ab830(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_006e814b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  uVar1 = FUN_0067b220();
  _BinkSetSoundSystem_8(_BinkOpenDirectSound_4_exref,uVar1);
  _RADSetMemory_8(&LAB_006ab7f0,&LAB_006ab810);
  param_1[3] = 1;
  param_1[8] = 0;
  puVar2 = (undefined4 *)operator_new(0x24);
  uStack_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = puVar2 + 1;
    *puVar2 = 1;
    FUN_006c043b(puVar3,0x20,1,FUN_00650250,thunk_FUN_00650380);
  }
  uStack_4 = 0xffffffff;
  *param_1 = puVar3;
  FUN_00650e90(4,0x400,0x200,1,0,0,0,0xffffffff,0);
  FUN_006503f0();
  FUN_00674c70(*param_1);
  param_1[4] = 1;
  param_1[6] = 0;
  param_1[5] = 0x3f800000;
  param_1[7] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  ExceptionList = pvStack_c;
  return;
}

