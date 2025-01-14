/*
 *  Do not modify this file; it is automatically 
 *  generated and any modifications will be overwritten.
 *
 * @(#) xdc-A71
 */
import java.util.*;
import org.mozilla.javascript.*;
import xdc.services.intern.xsr.*;
import xdc.services.spec.Session;

public class ti_sysbios_posix
{
    static final String VERS = "@(#) xdc-A71\n";

    static final Proto.Elm $$T_Bool = Proto.Elm.newBool();
    static final Proto.Elm $$T_Num = Proto.Elm.newNum();
    static final Proto.Elm $$T_Str = Proto.Elm.newStr();
    static final Proto.Elm $$T_Obj = Proto.Elm.newObj();

    static final Proto.Fxn $$T_Met = new Proto.Fxn(null, null, 0, -1, false);
    static final Proto.Map $$T_Map = new Proto.Map($$T_Obj);
    static final Proto.Arr $$T_Vec = new Proto.Arr($$T_Obj);

    static final XScriptO $$DEFAULT = Value.DEFAULT;
    static final Object $$UNDEF = Undefined.instance;

    static final Proto.Obj $$Package = (Proto.Obj)Global.get("$$Package");
    static final Proto.Obj $$Module = (Proto.Obj)Global.get("$$Module");
    static final Proto.Obj $$Instance = (Proto.Obj)Global.get("$$Instance");
    static final Proto.Obj $$Params = (Proto.Obj)Global.get("$$Params");

    static final Object $$objFldGet = Global.get("$$objFldGet");
    static final Object $$objFldSet = Global.get("$$objFldSet");
    static final Object $$proxyGet = Global.get("$$proxyGet");
    static final Object $$proxySet = Global.get("$$proxySet");
    static final Object $$delegGet = Global.get("$$delegGet");
    static final Object $$delegSet = Global.get("$$delegSet");

    Scriptable xdcO;
    Session ses;
    Value.Obj om;

    boolean isROV;
    boolean isCFG;

    Proto.Obj pkgP;
    Value.Obj pkgV;

    ArrayList<Object> imports = new ArrayList<Object>();
    ArrayList<Object> loggables = new ArrayList<Object>();
    ArrayList<Object> mcfgs = new ArrayList<Object>();
    ArrayList<Object> icfgs = new ArrayList<Object>();
    ArrayList<String> inherits = new ArrayList<String>();
    ArrayList<Object> proxies = new ArrayList<Object>();
    ArrayList<Object> sizes = new ArrayList<Object>();
    ArrayList<Object> tdefs = new ArrayList<Object>();

    void $$IMPORTS()
    {
        Global.callFxn("loadPackage", xdcO, "xdc");
        Global.callFxn("loadPackage", xdcO, "xdc.corevers");
        Global.callFxn("loadPackage", xdcO, "xdc.runtime");
    }

    void $$OBJECTS()
    {
        pkgP = (Proto.Obj)om.bind("ti.sysbios.posix.Package", new Proto.Obj());
        pkgV = (Value.Obj)om.bind("ti.sysbios.posix", new Value.Obj("ti.sysbios.posix", pkgP));
    }

    void Settings$$OBJECTS()
    {
        Proto.Obj po, spo;
        Value.Obj vo;

        po = (Proto.Obj)om.bind("ti.sysbios.posix.Settings.Module", new Proto.Obj());
        vo = (Value.Obj)om.bind("ti.sysbios.posix.Settings", new Value.Obj("ti.sysbios.posix.Settings", po));
        pkgV.bind("Settings", vo);
        // decls 
    }

    void Settings$$CONSTS()
    {
        // module Settings
    }

    void Settings$$CREATES()
    {
        Proto.Fxn fxn;
        StringBuilder sb;

    }

    void Settings$$FUNCTIONS()
    {
        Proto.Fxn fxn;

    }

    void Settings$$SIZES()
    {
        Proto.Str so;
        Object fxn;

    }

    void Settings$$TYPES()
    {
        Scriptable cap;
        Proto.Obj po;
        Proto.Str ps;
        Proto.Typedef pt;
        Object fxn;

        cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sysbios/posix/Settings.xs");
        om.bind("ti.sysbios.posix.Settings$$capsule", cap);
        po = (Proto.Obj)om.findStrict("ti.sysbios.posix.Settings.Module", "ti.sysbios.posix");
        po.init("ti.sysbios.posix.Settings.Module", om.findStrict("xdc.runtime.IModule.Module", "ti.sysbios.posix"));
                po.addFld("$hostonly", $$T_Num, 0, "r");
        if (isCFG) {
            po.addFld("supportsMutexPriority", $$T_Bool, false, "w");
            po.addFld("debug", $$T_Bool, false, "w");
        }//isCFG
        fxn = Global.get(cap, "module$use");
        if (fxn != null) om.bind("ti.sysbios.posix.Settings$$module$use", true);
        if (fxn != null) po.addFxn("module$use", $$T_Met, fxn);
        fxn = Global.get(cap, "module$meta$init");
        if (fxn != null) om.bind("ti.sysbios.posix.Settings$$module$meta$init", true);
        if (fxn != null) po.addFxn("module$meta$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$static$init");
        if (fxn != null) om.bind("ti.sysbios.posix.Settings$$module$static$init", true);
        if (fxn != null) po.addFxn("module$static$init", $$T_Met, fxn);
        fxn = Global.get(cap, "module$validate");
        if (fxn != null) om.bind("ti.sysbios.posix.Settings$$module$validate", true);
        if (fxn != null) po.addFxn("module$validate", $$T_Met, fxn);
    }

    void Settings$$ROV()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.posix.Settings", "ti.sysbios.posix");
    }

    void $$SINGLETONS()
    {
        pkgP.init("ti.sysbios.posix.Package", (Proto.Obj)om.findStrict("xdc.IPackage.Module", "ti.sysbios.posix"));
        Scriptable cap = (Scriptable)Global.callFxn("loadCapsule", xdcO, "ti/sysbios/posix/package.xs");
        om.bind("xdc.IPackage$$capsule", cap);
        Object fxn;
                fxn = Global.get(cap, "init");
                if (fxn != null) pkgP.addFxn("init", (Proto.Fxn)om.findStrict("xdc.IPackage$$init", "ti.sysbios.posix"), fxn);
                fxn = Global.get(cap, "close");
                if (fxn != null) pkgP.addFxn("close", (Proto.Fxn)om.findStrict("xdc.IPackage$$close", "ti.sysbios.posix"), fxn);
                fxn = Global.get(cap, "validate");
                if (fxn != null) pkgP.addFxn("validate", (Proto.Fxn)om.findStrict("xdc.IPackage$$validate", "ti.sysbios.posix"), fxn);
                fxn = Global.get(cap, "exit");
                if (fxn != null) pkgP.addFxn("exit", (Proto.Fxn)om.findStrict("xdc.IPackage$$exit", "ti.sysbios.posix"), fxn);
                fxn = Global.get(cap, "getLibs");
                if (fxn != null) pkgP.addFxn("getLibs", (Proto.Fxn)om.findStrict("xdc.IPackage$$getLibs", "ti.sysbios.posix"), fxn);
                fxn = Global.get(cap, "getSects");
                if (fxn != null) pkgP.addFxn("getSects", (Proto.Fxn)om.findStrict("xdc.IPackage$$getSects", "ti.sysbios.posix"), fxn);
        pkgP.bind("$capsule", cap);
        pkgV.init2(pkgP, "ti.sysbios.posix", Value.DEFAULT, false);
        pkgV.bind("$name", "ti.sysbios.posix");
        pkgV.bind("$category", "Package");
        pkgV.bind("$$qn", "ti.sysbios.posix.");
        pkgV.bind("$vers", Global.newArray(1, 0, 0, 0));
        Value.Map atmap = (Value.Map)pkgV.getv("$attr");
        atmap.seal("length");
        imports.clear();
        pkgV.bind("$imports", imports);
        StringBuilder sb = new StringBuilder();
        sb.append("var pkg = xdc.om['ti.sysbios.posix'];\n");
        sb.append("if (pkg.$vers.length >= 3) {\n");
            sb.append("pkg.$vers.push(Packages.xdc.services.global.Vers.getDate(xdc.csd() + '/..'));\n");
        sb.append("}\n");
        sb.append("if ('ti.sysbios.posix$$stat$base' in xdc.om) {\n");
            sb.append("pkg.packageBase = xdc.om['ti.sysbios.posix$$stat$base'];\n");
            sb.append("pkg.packageRepository = xdc.om['ti.sysbios.posix$$stat$root'];\n");
        sb.append("}\n");
        sb.append("pkg.build.libraries = [\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.a28L',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.a28FP',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.a674',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.ae430X',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.ar430XS',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.ae64P',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.ae674',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.ae66',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.ae66e',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.aearp32',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.aearp32F',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.ae9',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.aea8fnv',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.aer5f',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.aer4f',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.aem0',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.aem3',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.aem4',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.aem4f',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.am3g',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.am4g',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.am4fg',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.aa8fg',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.aa9fg',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.aa15fg',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.arm3',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.arm4',\n");
            sb.append("'lib/sysbios/debug/ti.sysbios.posix.arm4f',\n");
            sb.append("'lib/smpbios/debug/ti.sysbios.posix.aem3',\n");
            sb.append("'lib/smpbios/debug/ti.sysbios.posix.aem4',\n");
        sb.append("];\n");
        sb.append("pkg.build.libDesc = [\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.a28L', {target: 'ti.targets.C28_large', suffix: '28L'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.a28FP', {target: 'ti.targets.C28_float', suffix: '28FP'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.a674', {target: 'ti.targets.C674', suffix: '674'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.ae430X', {target: 'ti.targets.msp430.elf.MSP430X', suffix: 'e430X'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.ar430XS', {target: 'iar.targets.msp430.MSP430X_small', suffix: 'r430XS'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.ae64P', {target: 'ti.targets.elf.C64P', suffix: 'e64P'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.ae674', {target: 'ti.targets.elf.C674', suffix: 'e674'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.ae66', {target: 'ti.targets.elf.C66', suffix: 'e66'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.ae66e', {target: 'ti.targets.elf.C66_big_endian', suffix: 'e66e'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.aearp32', {target: 'ti.targets.arp32.elf.ARP32', suffix: 'earp32'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.aearp32F', {target: 'ti.targets.arp32.elf.ARP32_far', suffix: 'earp32F'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.ae9', {target: 'ti.targets.arm.elf.Arm9', suffix: 'e9'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.aea8fnv', {target: 'ti.targets.arm.elf.A8Fnv', suffix: 'ea8fnv'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.aer5f', {target: 'ti.targets.arm.elf.R5F', suffix: 'er5f'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.aer4f', {target: 'ti.targets.arm.elf.R4F', suffix: 'er4f'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.aem0', {target: 'ti.targets.arm.elf.M0', suffix: 'em0'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.aem4', {target: 'ti.targets.arm.elf.M4', suffix: 'em4'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.aem4f', {target: 'ti.targets.arm.elf.M4F', suffix: 'em4f'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.am3g', {target: 'gnu.targets.arm.M3', suffix: 'm3g'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.am4g', {target: 'gnu.targets.arm.M4', suffix: 'm4g'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.am4fg', {target: 'gnu.targets.arm.M4F', suffix: 'm4fg'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.aa8fg', {target: 'gnu.targets.arm.A8F', suffix: 'a8fg'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.aa9fg', {target: 'gnu.targets.arm.A9F', suffix: 'a9fg'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.aa15fg', {target: 'gnu.targets.arm.A15F', suffix: 'a15fg'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.arm3', {target: 'iar.targets.arm.M3', suffix: 'rm3'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.arm4', {target: 'iar.targets.arm.M4', suffix: 'rm4'}],\n");
            sb.append("['lib/sysbios/debug/ti.sysbios.posix.arm4f', {target: 'iar.targets.arm.M4F', suffix: 'rm4f'}],\n");
            sb.append("['lib/smpbios/debug/ti.sysbios.posix.aem3', {target: 'ti.targets.arm.elf.M3', suffix: 'em3'}],\n");
            sb.append("['lib/smpbios/debug/ti.sysbios.posix.aem4', {target: 'ti.targets.arm.elf.M4', suffix: 'em4'}],\n");
        sb.append("];\n");
        Global.eval(sb.toString());
    }

    void Settings$$SINGLETONS()
    {
        Proto.Obj po;
        Value.Obj vo;

        vo = (Value.Obj)om.findStrict("ti.sysbios.posix.Settings", "ti.sysbios.posix");
        po = (Proto.Obj)om.findStrict("ti.sysbios.posix.Settings.Module", "ti.sysbios.posix");
        vo.init2(po, "ti.sysbios.posix.Settings", $$DEFAULT, false);
        vo.bind("Module", po);
        vo.bind("$category", "Module");
        vo.bind("$capsule", om.findStrict("ti.sysbios.posix.Settings$$capsule", "ti.sysbios.posix"));
        vo.bind("$package", om.findStrict("ti.sysbios.posix", "ti.sysbios.posix"));
        tdefs.clear();
        proxies.clear();
        mcfgs.clear();
        icfgs.clear();
        inherits.clear();
        mcfgs.add("Module__diagsEnabled");
        icfgs.add("Module__diagsEnabled");
        mcfgs.add("Module__diagsIncluded");
        icfgs.add("Module__diagsIncluded");
        mcfgs.add("Module__diagsMask");
        icfgs.add("Module__diagsMask");
        mcfgs.add("Module__gateObj");
        icfgs.add("Module__gateObj");
        mcfgs.add("Module__gatePrms");
        icfgs.add("Module__gatePrms");
        mcfgs.add("Module__id");
        icfgs.add("Module__id");
        mcfgs.add("Module__loggerDefined");
        icfgs.add("Module__loggerDefined");
        mcfgs.add("Module__loggerObj");
        icfgs.add("Module__loggerObj");
        mcfgs.add("Module__loggerFxn0");
        icfgs.add("Module__loggerFxn0");
        mcfgs.add("Module__loggerFxn1");
        icfgs.add("Module__loggerFxn1");
        mcfgs.add("Module__loggerFxn2");
        icfgs.add("Module__loggerFxn2");
        mcfgs.add("Module__loggerFxn4");
        icfgs.add("Module__loggerFxn4");
        mcfgs.add("Module__loggerFxn8");
        icfgs.add("Module__loggerFxn8");
        mcfgs.add("Module__startupDoneFxn");
        icfgs.add("Module__startupDoneFxn");
        mcfgs.add("Object__count");
        icfgs.add("Object__count");
        mcfgs.add("Object__heap");
        icfgs.add("Object__heap");
        mcfgs.add("Object__sizeof");
        icfgs.add("Object__sizeof");
        mcfgs.add("Object__table");
        icfgs.add("Object__table");
        mcfgs.add("supportsMutexPriority");
        mcfgs.add("debug");
        vo.bind("$$tdefs", Global.newArray(tdefs.toArray()));
        vo.bind("$$proxies", Global.newArray(proxies.toArray()));
        vo.bind("$$mcfgs", Global.newArray(mcfgs.toArray()));
        vo.bind("$$icfgs", Global.newArray(icfgs.toArray()));
        inherits.add("xdc.runtime");
        vo.bind("$$inherits", Global.newArray(inherits.toArray()));
        ((Value.Arr)pkgV.getv("$modules")).add(vo);
        ((Value.Arr)om.findStrict("$modules", "ti.sysbios.posix")).add(vo);
        vo.bind("$$instflag", 0);
        vo.bind("$$iobjflag", 0);
        vo.bind("$$sizeflag", 1);
        vo.bind("$$dlgflag", 0);
        vo.bind("$$iflag", 0);
        vo.bind("$$romcfgs", "|");
        vo.bind("$$nortsflag", 0);
        if (isCFG) {
            Proto.Str ps = (Proto.Str)vo.find("Module_State");
            if (ps != null) vo.bind("$object", ps.newInstance());
            vo.bind("$$meta_iobj", 1);
        }//isCFG
        vo.bind("$$fxntab", Global.newArray("ti_sysbios_posix_Settings_Module__startupDone__E"));
        vo.bind("$$logEvtCfgs", Global.newArray());
        vo.bind("$$errorDescCfgs", Global.newArray());
        vo.bind("$$assertDescCfgs", Global.newArray());
        Value.Map atmap = (Value.Map)vo.getv("$attr");
        atmap.setElem("", "./Settings.xdt");
        atmap.seal("length");
        vo.bind("MODULE_STARTUP$", 0);
        vo.bind("PROXY$", 0);
        loggables.clear();
        vo.bind("$$loggables", loggables.toArray());
        vo.bind("TEMPLATE$", "./Settings.xdt");
        pkgV.bind("Settings", vo);
        ((Value.Arr)pkgV.getv("$unitNames")).add("Settings");
    }

    void $$INITIALIZATION()
    {
        Value.Obj vo;

        if (isCFG) {
        }//isCFG
        Global.callFxn("module$meta$init", (Scriptable)om.findStrict("ti.sysbios.posix.Settings", "ti.sysbios.posix"));
        Global.callFxn("init", pkgV);
        ((Value.Obj)om.getv("ti.sysbios.posix.Settings")).bless();
        ((Value.Arr)om.findStrict("$packages", "ti.sysbios.posix")).add(pkgV);
    }

    public void exec( Scriptable xdcO, Session ses )
    {
        this.xdcO = xdcO;
        this.ses = ses;
        om = (Value.Obj)xdcO.get("om", null);

        Object o = om.geto("$name");
        String s = o instanceof String ? (String)o : null;
        isCFG = s != null && s.equals("cfg");
        isROV = s != null && s.equals("rov");

        $$IMPORTS();
        $$OBJECTS();
        Settings$$OBJECTS();
        Settings$$CONSTS();
        Settings$$CREATES();
        Settings$$FUNCTIONS();
        Settings$$SIZES();
        Settings$$TYPES();
        if (isROV) {
            Settings$$ROV();
        }//isROV
        $$SINGLETONS();
        Settings$$SINGLETONS();
        $$INITIALIZATION();
    }
}
