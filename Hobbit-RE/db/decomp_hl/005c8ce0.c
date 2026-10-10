
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005c8ce0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  if ((*(char *)(param_1 + 0x20) == '\0') || (*(char *)(param_1 + 0x20) == '\x02')) {
    fVar5 = *(float *)(param_1 + 8) + _DAT_006ec0a4;
  }
  else {
    fVar5 = *(float *)(param_1 + 8) + _DAT_006e92f4;
  }
  uVar6 = *(undefined4 *)(param_1 + 4);
  uVar7 = 0;
  puVar3 = auStack_24;
  puVar4 = auStack_30;
  FUN_0065fce0(0,puVar4,puVar3,uVar6,fVar5,0);
  FUN_00673930(puVar4,puVar3,uVar6,fVar5,uVar7);
  uVar6 = 7;
  FUN_0066c3a0(7,0x636);
  FUN_0066db80(&DAT_00763220 + *(int *)(param_1 + 0x18) * 0x20,0);
  iVar1 = param_1 + 0x3c;
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar5 = -(*(float *)(param_1 + 0x10) + _DAT_006e9368);
    FUN_00413480(0,0,0,0x50);
    uVar7 = FUN_0041b9c0(0x3f800000,0x3f800000);
    uVar2 = FUN_0041b9c0(0,0);
    uVar6 = FUN_00402160(auStack_18,auStack_30,0x447a0000,iVar1,uVar2,uVar7,uVar6,fVar5);
    puVar3 = auStack_c;
  }
  else {
    fVar5 = -*(float *)(param_1 + 0x10);
    FUN_00413480(0,0,0,0x80);
    uVar7 = FUN_0041b9c0(0x3f800000,0x3f800000);
    uVar2 = FUN_0041b9c0(0,0);
    uVar6 = FUN_00402160(auStack_c,auStack_30,0x447a0000,iVar1,uVar2,uVar7,uVar6,fVar5);
    puVar3 = auStack_18;
  }
  uVar6 = FUN_00402130(puVar3,auStack_24,uVar6);
  FUN_0066e740(uVar6);
  FUN_0066d9a0();
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar7 = *(undefined4 *)(param_1 + 4);
  uVar2 = 0;
  puVar3 = auStack_24;
  puVar4 = auStack_30;
  FUN_0065fce0(0,puVar4,puVar3,uVar7,uVar6,0);
  FUN_00673930(puVar4,puVar3,uVar7,uVar6,uVar2);
  uVar6 = 7;
  FUN_0066c3a0(7,0x636);
  FUN_0066db80(&DAT_00763220 + *(int *)(param_1 + 0x18) * 0x20,0);
  if (*(char *)(param_1 + 0x20) == '\0') {
    fVar5 = -(*(float *)(param_1 + 0x10) + _DAT_006e9368);
    FUN_00406b70(0xffffffff);
    uVar7 = FUN_0041b9c0(0x3f800000,0x3f800000);
    uVar2 = FUN_0041b9c0(0,0);
    uVar6 = FUN_00402160(auStack_c,auStack_30,0x447a0000,iVar1,uVar2,uVar7,uVar6,fVar5);
  }
  else {
    fVar5 = -*(float *)(param_1 + 0x10);
    FUN_00406b70(0xffffffff);
    uVar7 = FUN_0041b9c0(0x3f800000,0x3f800000);
    uVar2 = FUN_0041b9c0(0,0);
    uVar6 = FUN_00402160(auStack_c,auStack_30,0x447a0000,iVar1,uVar2,uVar7,uVar6,fVar5);
  }
  uVar6 = FUN_00402130(auStack_18,auStack_24,uVar6);
  FUN_0066e740(uVar6);
  FUN_0066d9a0();
  return;
}

