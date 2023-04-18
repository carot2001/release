import java.security.PublicKey;
import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;

abstract class NhanVien {
    private String maNV;
    private String tenNV;
    private String trinhDo;
    private double luongCoBan;
    
    public NhanVien() {
    	
    }
    public NhanVien(String maNV, String tenNV, String trinhDo, double luongCoBan) {
        this.setMaNV(maNV);
        this.setTenNV(tenNV);
        this.setTrinhDo(trinhDo);
        this.setLuongCoBan(luongCoBan);
    }

    public abstract double tinhLuong();

	public String getMaNV() {
		return maNV;
	}

	public void setMaNV(String maNV) {
		this.maNV = maNV;
	}

	public String getTenNV() {
		return tenNV;
	}

	public void setTenNV(String tenNV) {
		this.tenNV = tenNV;
	}

	public String getTrinhDo() {
		return trinhDo;
	}

	public void setTrinhDo(String trinhDo) {
		this.trinhDo = trinhDo;
	}

	public double getLuongCoBan() {
		return luongCoBan;
	}

	public void setLuongCoBan(double luongCoBan) {
		this.luongCoBan = luongCoBan;
	}
}
class NhanVienQuanLy extends NhanVien {
	private String chuyenMon;
	private double phuCapChucVu;
	
	public NhanVienQuanLy(String maNv, String tenNv, String trinhDo, double luongCoBan, String chuyenMon, double phuCapChucVu ) {
		super(maNv, tenNv, trinhDo, luongCoBan);
		this.chuyenMon = chuyenMon;
		this.phuCapChucVu = phuCapChucVu;
	}

	@Override
	public double tinhLuong() {
		// TODO Auto-generated method stub
		return getLuongCoBan() + getPhuCapChucVu();
	}

	public String getChuyenMon() {
		return chuyenMon;
	}

	public void setChuyenMon(String chuyenMon) {
		this.chuyenMon = chuyenMon;
	}

	public double getPhuCapChucVu() {
		return phuCapChucVu;
	}

	public void setPhuCapChucVu(double phuCapChucVu) {
		this.phuCapChucVu = phuCapChucVu;
	}
}
class NhanVienPhucVu extends NhanVien{
	public NhanVienPhucVu(String maNV, String tenNV, String trinhDo, double luongCoBan) {
		super(maNV, tenNV, trinhDo, luongCoBan);	
	}
	
	//Luong = luongCoBan
	public double tinhLuong() {
		return getLuongCoBan();
	}
}
class NhanVienNghienCuu extends NhanVien {
	private String chuyenMon;
	private double phuCapDocHai;
	
	
	public NhanVienNghienCuu(String maNv, String tenNv, String trinhDo, double luongCoBan, String chuyenMon, double phuCapDocHai) {
		super(maNv, tenNv, trinhDo, luongCoBan);
		this.setChuyenMon(chuyenMon);
		this.setPhuCapDocHai(phuCapDocHai);
	}
	
	public double tinhLuong() {
		return getLuongCoBan() + getPhuCapDocHai();
	}

	public String getChuyenMon() {
		return chuyenMon;
	}

	public void setChuyenMon(String chuyenMon) {
		this.chuyenMon = chuyenMon;
	}

	public double getPhuCapDocHai() {
		return phuCapDocHai;
	}

	public void setPhuCapDocHai(double phuCapDocHai) {
		this.phuCapDocHai = phuCapDocHai;
	}
}
class QLNV {
	private List<NhanVien>nhanVienList;
	public QLNV() {
		nhanVienList = new ArrayList<>();
	}
	public void addElement(NhanVien nhanVien) {
		nhanVienList.add(nhanVien);
	}
	public void showElement() {
		for(NhanVien nhanVien : nhanVienList) {
			System.out.println("Mã nhân viên: " + nhanVien.getMaNV());
			System.out.println("Họ và tên: " + nhanVien.getTenNV());
			System.out.println("Trình độ: " + nhanVien.getTrinhDo());
			System.out.println("Lương cơ bản: " + nhanVien.getLuongCoBan());
			
			if(nhanVien instanceof NhanVienQuanLy) {
				NhanVienQuanLy nhanVienQuanLy = (NhanVienQuanLy) nhanVien;
				System.out.println("Chuyên môn: " + nhanVienQuanLy.getChuyenMon());
				System.out.println("Phụ cấp chức vụ: " + nhanVienQuanLy.getPhuCapChucVu());
			}
			else if(nhanVien instanceof NhanVienNghienCuu) {
				NhanVienNghienCuu nhanVienNghienCuu = (NhanVienNghienCuu) nhanVien;
				System.out.println("Chuyên môn: " + nhanVienNghienCuu.getChuyenMon());
				System.out.println("Phụ cấp độc hại: " + nhanVienNghienCuu.getPhuCapDocHai());
			}
			else if(nhanVien instanceof NhanVienPhucVu) {
				
			}
		}
	}
	public void Function() {
		Scanner sc = new Scanner(System.in);
		
		System.out.println("Vui lòng nhập số lượng nhân viên: ");
		int n = sc.nextInt();
		
		for(int i = 0; i < n; i++) {
			System.out.println("Vui lòng nhâp mã nhân viên: ");
			String maNv = sc.nextLine();
			sc.nextLine();
			System.out.println("Vui lòng nhập tên nhân viên: ");
			String tenNv = sc.nextLine();
			
			System.out.println("Vui lòng nhập trình độ: ");
			String trinhDo = sc.nextLine();
			
			System.out.println("Vui lòng nhập lương cơ bản: ");
			double luongCoBan = sc.nextDouble();
			
			System.out.println("Chọn phân loại nhân viên mà bạn muốn nhập: 1. Nhân viên quản lý / 2.Nhân viên nghiên cứu/ 3.Nhân viên phục vụ");
			int choose = sc.nextInt();
			if(choose == 1) {
				System.out.println("Vui lòng nhập trình độ chuyên môn: ");
				String chuyenMon = sc.nextLine();
				sc.nextLine();
				System.out.println("Vui lòng nhập phụ cấp chức vụ: ");
				double phuCapChucVu = sc.nextInt();
				NhanVien nhanVienQuanLy = new NhanVienQuanLy(maNv, tenNv, trinhDo, luongCoBan, chuyenMon, phuCapChucVu);
				addElement(nhanVienQuanLy);
			}
			else if(choose == 2) {
				System.out.println("Vui lòng nhâp trình độ chuyên môn: ");
				String chuyenMon = sc.nextLine();
				sc.nextLine();
				System.out.println("Vui lòng nhập phụ cấp độc hại: ");
				double phuCapDocHai = sc.nextDouble();
				NhanVien nhanVienNghienCuu = new NhanVienNghienCuu(maNv, tenNv, trinhDo, luongCoBan, chuyenMon, phuCapDocHai);
				addElement(nhanVienNghienCuu);
			}
			else if(choose == 3) {
				NhanVien nhanVienPhucVu = new NhanVienPhucVu(maNv, tenNv, trinhDo, luongCoBan);
				addElement(nhanVienPhucVu);
			}
		}
		
	}
	public void Calculate() {
		System.out.println("Tính lương cho từng nhân viên");
		for(NhanVien nhanVien : nhanVienList) {
			System.out.println("Nhân viên: " + nhanVien.getTenNV() + " có mức lương là: " + nhanVien.tinhLuong());
		}
	}
}

public class Cuoiky {
	public void main(String[] args) {
		QLNV qlnv = new QLNV();
	
		qlnv.Function();
		qlnv.Calculate();
	}
}
